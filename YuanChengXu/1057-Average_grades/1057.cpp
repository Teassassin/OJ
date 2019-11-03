/*#include <cstdio>

using namespace std;

int main()
{
    int n, m;
    float ns[50][5];
    while(~scanf("%d%d", &n, &m))
    {
        float sum_stu[50] = {}, sum_sub[5] = {};
        float ave_stu[50] = {}, ave_sub[5] = {10};
        int count_super = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                scanf("%f", &ns[i][j]);
            }
        }

        // 第一行输出
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                // 每个学生的所有成绩
                sum_stu[i] += ns[i][j];
            }
            // 每个学生的所有成绩的平均成绩
            ave_stu[i] = sum_stu[i] / n;
            printf("%.2f ", ave_stu[i]);
        }
        printf("\n");

        // 第二行输出
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                sum_sub[i] += ns[i][j];
            }
            ave_sub[i] = sum_sub[i] / m;
            printf("%.2f ", ave_sub[i]);
        }
        printf("\n");

        // 第三行输出
        for(int i = 0; i < n; i++)
        {
            bool mark = true;
            for(int j = 0; j < m; j++)
            {
                if(ns[i][j] < ave_sub[j])
                    mark = false;
            }
            if(mark)
                count_super++;
        }
        printf("%d", count_super);
    }
    return 0;
}
*/
#include <cstdio>
int main()
{
    int n,m,score[50][5],num;
    while(~scanf("%d%d",&n,&m))
    {
        double ans[2][50];
        for(int i=0,sum=0; i<n; i++,sum=0)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&score[i][j]);
                sum=sum+score[i][j];
            }
            ans[0][i]=(double)sum/m;//??????????????????ans[0][i]???
        } //???0??????????????????????????????

        for(int i=0,sum=0; i<m; i++,sum=0)
        {
            for(int j=0; j<n; j++)
            {
                sum=sum+score[j][i];
            }
            ans[1][i]=(double)sum/n;
        }//??????????????????????????????
        num=0;
        for(int i=0,flag=1; i<n; i++,flag=1)
        {
            for(int j=0; j<m; j++)
            {
                if(score[i][j]<ans[1][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                num++;
        }//?????????????????????????????????
        for(int i=0; i<n; i++)
            printf(i==n-1?"%.2lf\n":"%.2lf ",ans[0][i]);
        for(int i=0; i<m; i++)
            printf(i==m-1?"%.2lf\n":"%.2lf ",ans[1][i]);
        printf("%d\n\n",num);
    }
    return 0;
}

