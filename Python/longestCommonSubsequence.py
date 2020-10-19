#Find the longest common substring from
# given input strings

inpA = "ABDCDS"
inpB = "CSEDABSCD"

lenA = len(inpA)
lenB = len(inpB)
lcs = [[0]*lenB for i in range(lenA)]
for i,c1 in enumerate(inpA):
    for j,c2 in enumerate(inpB):
        if c1 == c2:
            lcs[i][j] = 1 + lcs[i-1][j-1]
        else:
            lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1])


print(lcs[lenA-1][lenB-1])
