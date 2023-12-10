
#include<stdio.h>
// int main()
// {
//     int i;

//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("Initial array is : \n");
//     for (i = 0; i <= 4; i++) printf("%d ", arr[i]);
//     for(i=0;i<=4;i++){
//         if(i%2!=0) arr[i]*=2;
//         else arr[i]+=2;
//     }
//     printf("\n");
//     printf("final array is : \n");
//     for (i = 0; i <= 4; i++) printf("%d ", arr[i]);


//     return 0;
// }


// 2. count the no of elements greater than x


// int main()
// {   int i;
//     int arr[5]={1,2,3,4,5};
//     int count = 0;
//     for(i=0;i<=4;i++){

//         if(arr[i]>1) count++;
        
//     }
//     printf("%d",count);

// }


// 3. pairs



int main()
{   int i;
    int arr[5]={1,2,3,4,5};
    int count = 0;
    for(i=0;i<=4;i++){

        if(arr[i]>1) count++;
        
    }
    printf("%d",count);

}
