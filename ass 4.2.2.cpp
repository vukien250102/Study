#include <stdio.h>
#include<conio.h>
int SoDuongMin(int a[],int n) {

            int i,min;

            for(i=0; i<n; i++) {

                        if(a[i]>0) {

                                    min = a[i];

                                    break;

                        }

            }

            for(i=0; i<n; i++) {

                        if(a[i]>0 && a[i]<min)

                                    min = a[i];

            }

            return min;

}
