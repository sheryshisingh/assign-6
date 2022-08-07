// #include<stdio.h>
// int area(int r)
// {
//     float c=3.14*r*r;
//     printf("%f",c);
//     return(c);
// }
// int main(int argc, char const *argv[])
// {
//     int x;
//     float y;
//     printf("enterr a no. to find arrea");
//     scanf("%d",&x);
//     y=area(x);
//     return 0;
// }
// 2
// #include<stdio.h>
// float si(int p,int r,int t)
// {
//     int z=p*r*t;
//     float c=z/100;
//     printf("%f",c);
//     return(c);
// }
// int main(int argc, char const *argv[])
// {
//     int a,b,d;
//     float e;
//     printf("enter three no.");
//     scanf("%d%d%d",&a,&b,&d);
//      e=si(a,b,d);
    
//     return 0;
// }
//  3

// #include<stdio.h>
// int evenodd(int a)
// {
// if(a%2==0)
// {

//     return(1);
// }
// else
// return(0);

// }
// int main(int argc, char const *argv[])
// {
//     int c;
//     printf("enter a no.");
//     scanf("%d",&c);
//     printf("%d",evenodd(c));
//     return 0;
// }

//4
// #include<stdio.h>
// void naturalno(int a)
// {
//     int i;
//     for(i=1;i<=a;i++)
//     {
//         printf("%3d",i);
//     }

// }
// int main(int argc, char const *argv[])
// {
//     int p;
//     printf("enter a no.");
//     scanf("%d",&p);
//     naturalno(p);
    
//     return 0;
// }

// 5





// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     int fact=1;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         printf("%d",i);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     printf("enter a no.");

//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d",2*i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         printf("%d",2*i+1);
//     }
//     return 0;
//  }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     printf("enter a no.");
//     scanf("%d",&n);
//      for(i=0;i<=n;i++)
//      {
//         printf("%d",i*i);
//      }
     
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,sum=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
       
//        sum=sum+i;

//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,sum=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
        
//         sum=sum+(2*i);
//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,sum=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         sum=sum+(2*i+1);
//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,sum=0;
//     printf("enter a  no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//       sum=sum+(i*i);
//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,sum=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         sum=sum+(i*i*i);
//     }
//     printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,fact=1;
//     printf("enterr a no.");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,count=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         n=n/10;
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,flag=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
    
//     if(n%i==0)
//     {
//         flag=1;
        
//         break;
//     }
//     }
    
//     if(flag==1)
//     printf("not  prime");
//     else
//     printf("prime");

//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,flag=0;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1)
    
//     {
//         printf("non prime");
//     }
//     else
//     printf("prime");
//     return 0;
// }


//lcm
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n,a,b;
//     printf("enter two no.");
//     scanf("%d%d",&a,&b);
//     for(i=1;i<=a*b;i++)
//     {
//        if(i%a==0&&i%b==0)
//        break;
//     }
//     printf("%d",i);
//     return 0;
// }

//hcf

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
    
//     int i,n,a,b;
//     printf("enter aa no.");
//     scanf("%d%d",&a,&b);
//     for(i=1;i<=a*b;i++)
//     {
//         if(i%a==0&&i%b==0)
//         break;
//     }
//     printf("%d",i);
//     printf("\n");
//     printf("hcf is %d",(a*b)/i);
//     return 0;
// }

//reversing a no.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i,n,remainder;
    int reverse=0;
    printf("enter a no.");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10+remainder;

    }
    printf("%d",reverse);
    return 0;
}


