text="appleisisred"
pat="is"
m=len(text)
n=len(pat)
p=0
t=0
q=101
d=256
h=1
for i in range(n-1):
	h=(h*d)%q
for i in range(n):
	t=(t*d + ord(text[i]))%q
	p=(p*d +ord(pat[i]))%q
for i in range(m-n+1):
	if(p==t):
		for j in range(n):
			if(pat[j]!=text[i+j]):
				break
		j+=1
		if(j==n):
			print(i)
	if(i<m-n):
		t=(d*(t-ord(text[i])*h)+ord(text[i+n]))%q
		if(t<0):
			t+=q
