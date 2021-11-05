  #include <stdio.h>
  void nm(int n, int nu[]);
    void main()
    {
 
        int i, n, nu[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the nums \n");
        for (i = 0; i < n; i++)
            scanf("%d", &nu[i]);
 
  nm(n,nu);
    }
      void nm(int n, int nu[])
      {int i, j, a;
        for (i = 0; i < n; i++) 
        {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (nu[i] > nu[j]) 
                {
 
                    a =  nu[i];
                    nu[i] = nu[j];
                    nu[j] = a;
 
                }
 
            }
 
        }
 
        printf("The nums arranged in ascending order are given below \n");
        for (i = 0; i < n; i++)
            printf("%d\n", nu[i]);
 
    }