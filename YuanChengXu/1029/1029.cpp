#include <cstdio>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 50)
        return 0;
    float l[50] = {0}, sum = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == 1)
            l[i] = i + 2;
        else
            l[i] = l[i - 1] + l[i - 2];
        sum += l[i] / ((i + 1) * 2 + 1);
    }
    printf("%.2f", sum);
    return 0;
}