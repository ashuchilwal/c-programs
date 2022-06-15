int isPalindrome(int A) {
    int b = A;
    double r;
    while(b!=0)
    {
        r=b%10;
        b=b/10;
    }
    if(r==A)
        return 1;
    else 
        return 0;
}