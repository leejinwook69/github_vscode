long long sum(int *a, int n)
{
    static long long ans = 0;

    if(n == 0)
    {
        return ans;
    }else 
    {
        ans += a[n-1];
        return sum(a, n-1);
    }
}