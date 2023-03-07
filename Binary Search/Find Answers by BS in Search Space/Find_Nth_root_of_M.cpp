// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

double multiply(double num, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans *= num;
    }
    return ans;
}
int NthRoot(int n, int m)
{
    int s = 1;
    int e = m;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        long long int b = 1;
        for (int i = 1; i <= n; i++)
        {
            b *= mid;
            if (b > m)
                break;
        }
        if (b == m)
        {
            return mid;
        }
        else if (b > m)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;

    // For finding Decimal values
    // double s = 1;
    // double e = m;
    // double eps = 1e-6;
    // while((e - s) > eps){
    //    double mid = (s+e)/2.0;
    //    if(multiply(mid, n) <= m){
    //        s = mid;
    //    }
    //    else {
    //        e = mid;
    //    }
    //}
    // cout<<e<<" "<<s;
}