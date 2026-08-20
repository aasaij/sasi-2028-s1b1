str1, str2 = input().split()
len1 = len(str1)
len2 = len(str2)
dp =  [ [0] * (len2+1) for _ in range(len1+1)]
for r in range(1, len1+1):
    for c in range(1, len2+1):
        if str1[r-1] == str2[c-1]:
            dp[r][c] = dp[r-1][c-1] +1
        else:
            dp[r][c] = max(dp[r-1][c], dp[r][c-1])
print (dp[len1][len2])

