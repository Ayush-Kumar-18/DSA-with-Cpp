// https://practice.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

long long int floorSqrt(long long int x)
{
    if (x < 4)
    {
        return 1;
    }
    long long int s = 1;
    long long int e = x;
    while (s <= e)
    {
        long long int m = s + (e - s) / 2;

        if (m == x / m)
            return m;

        else if (m > x / m)
        {
            e = m - 1;
        }
        else
            s = m + 1;
    }
    return s - 1;
}