#include <stdio.h>
int main()
{
    printf("hello world");
    return 0;
}

//_______________________________________


#include <stdio.h>
int main()
{
    int a=20;
    char b= "hui hui";
    int age =18;
    float pi=3.14;

    int num=654;
    int mun=864;

    int _age=43;
    
    return 0;
}



//_______________________________________________


#include <stdio.h>
int main()
{
    int age=18;
    float pi=3.14;
    char hashtag="#"; 
    return 0;
}

//________________________________________________


#include <stdio.h>
int main()
{
    printf("helloo world \n");
    return 0;
}


//_____________________________________

#include <stdio.h>
int main()
{
    int age=22;
    printf("age is %d\n",age);
    return 0;
}


//______________________________________________


#include <stdio.h>
int main()
{
    float pi=3.14;
    printf("pi value is=%f\n",pi);
    return 0;
}


//________________________________________________________


#include <stdio.h>
int main()
{
    char star='*';
    printf("star is %c\n",star);
    return 0;
}



//__________________________________________________________


#include <stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("age is %d",age);
    return 0;
}

//______________________________________________

#include <stdio.h>
int main()
{
    int a,b;

    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);

    int sum=a+b;
    printf("sum is: %d\n",sum);
}


//_____________________________


// calculate area of a square

#include <stdio.h>
int main()
{
    int side;
    printf("enter side: ");
    scanf("%d",&side);

    int area= side*side;
    printf("area: %d",area);
    return 0;
}


//_______________________________________________

//area of a circle


#include <stdio.h>
int main()
{
    int r;
    float pi=3.14;
    printf("enter radius: ");
    scanf("%d",&r);

    float area=pi*r*r;
    printf("area: %f",area);
    return 0;

}