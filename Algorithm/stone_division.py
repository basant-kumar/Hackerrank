dp = {}
s=[]

def recs(n,c,p):
    l = len(s)
    pw = False
    if p==1:
        q=2
    else:
        q=1
        
    div = False
    for i in range(0,l):
        
        if n%s[i]==0:
            div = True
            #print ' n = '+`n`+' n/si = '+`n/s[i]`+' p = '+`p`+' c = '+`c`
            if not n/s[i] in dp:
                dp[n/s[i]] = recs(n/s[i],s[i],q)
                if dp[n/s[i]]==p:
                    pw=True
                    break
            elif dp[n/s[i]]==p:
                pw = True
                break
            else:
                pass
    if div==True:
        if pw == True and c%2==1:
            # print ' winner : '+`p`
            return p
        elif pw == False and c%2==0:
            # print ' winner : '+`q`
            return p
        else:
            return q
    else:
        return q

t = raw_input()
t = t.split(' ')
n = int(t[0])
m = int(t[1])
x = raw_input()
x = x.split(' ')
for i in range(0,m):
	s.append(int(x[i]))
if recs(n,1,1)==1:
    print 'First'
else:
    print 'Second'