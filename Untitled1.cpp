#include<cstdio>    
#include<iostream>    
#include <cmath>    
using namespace std;							//for C++ cout 
//+-*/   1234    
unsigned long int xx[1001];    
int x=1;    									//���w x=1 
int pd;    										//���w�@���ܼ� pd 
int f1(int a, int b, int c, int d)				//���w4�Ӿ��ܼ� a b c d

{
	int sum;    
    pd=0;    
    char s1,s2,s3;                             	//���w3��"�r��" char 
	
	
		 
	    for (int j = 1; j <= 4; j++)    		//���w j = 1 ,�p�G j <= 4, j+1 
    {    
        for (int k = 1; k <= 4; k++)			//���w k = 1,�p�G k <= 4, k+1 
        {    
            for (int l = 1; l <= 4; l++)    	//���w l = 1,�p�G l <= 4,l+1 
            {    
                sum = 0;    
                sum += a;    					//sum = sum+a 
                switch (j)    
                {    
                case 1:sum += b; break;    		//sum = sum+b
                case 2:sum -= b; break;    		//sum = sum-b
                case 3:sum *= b; break;    		//sum = sum*b
                case 4:    
                    {    
                        if (sum%b)				//�`�M���H b ���l�� 
                        {    
                            sum = 9999;    		//
                        }    
                        else    
                        {    
                            sum /= b;    		// 
                        }    
                    }break;    
                default:    
                    break;    
                }    
                switch (k)    
                {    
                case 1:sum += c; break;    		//sum = sum+c
                case 2:sum -= c; break;    		//sum = sum-c
                case 3:sum *= c; break;    		//sum = sum*c
                case 4:    
                    {    
                        if (sum%c)      		//�p�Gsum�i�H�㰣c 
                        {    
                            sum = 9999;    
                        }    
                        else    
                        {    
                            sum /= c;    		//sum = sum/c
                        }    
                    }break;    
                default:    
                    break;    
                }    
                switch (l)    
                {    
                case 1:sum += d; break;    
                case 2:sum -= d; break;    
                case 3:sum *= d; break;    
                case 4:    
                    {    
                        if (sum%d)    
                        {    
                            sum = 9999;    
                        }    
                        else    
                        {    
                            sum /= d;    
                        }    
                    }break;    
                default:    
                    break;    
                }    
switch (j)    
                {    
                case 1:s1='+';break;    
                case 2:s1='-';break;    
                case 3:s1='*';break;    
                case 4:s1='/';break;    
                }    
                switch (k)    
                {    
                case 1:s2='+';break;    
                case 2:s2='-';break;    
                case 3:s2='*';break;    
                case 4:s2='/';break;    
                }    
                switch (l)    
                {    
                case 1:s3='+';break;    
                case 2:s3='-';break;    
                case 3:s3='*';break;    
                case 4:s3='/';break;    
                }    
                if (sum == 24)    
                {    
                    if (x==0)    
                    {    
                        xx[x]=a*1000000+b*100000+c*10000+d*1000+j*100+k*10+l;    
                        x++;    
                        printf("((%d%c%d)%c%d)%c%d==24\n",a,s1,b,s2,c,s3,d);    
                    }    
                    else    
                    {    
                        for (int i=1;i<=x;i++)    
                        {    
                            if ((a*1000000+b*100000+c*10000+d*1000+j*100+k*10+l)==xx[i])    
                            {    
                                pd=1;    
                                break;    
                            }    
                        }    
                        if (pd==0)    
                        {    
                            xx[x]=a*1000000+b*100000+c*10000+d*1000+j*100+k*10+l;    
                            x++;    
                            printf("((%d%c%d)%c%d)%c%d==24\n",a,s1,b,s2,c,s3,d);        //
                        }    
                    }    
                    return 1;    
                }    
            }    
        }    
    }    
    return 0;    
}    
int f2(int a, int b, int c, int d)    			//���w4�Ӿ��  a b c d 
{    
    int sum = 0;    
    sum = f1(a, b, c, d) + f1(a, b, d, c) + f1(a, c, b, d) + f1(a, c, d, b) + f1(a, d, b, c) + f1(a, d, c, b);    
    if (sum != 0)    							//�p�G �`�M������ 0  
    {    
        return 1;    							//�p�G�`�M����0�A�^�h 1 
    }    
    else    
    {    
        return 0;    							//�p�G�`�M������0�A�����C 
    }    
}    
int main()    
{    
    int a, b, c, d;    							//���w�|�Ӿ�� a b c d  
    int sum;        
    cout << "plz input four numbers" << endl;									//I add
    cin >> a >> b >> c >> d;    
    sum = f2(a, b, c, d) + f2(b, a, c, d) + f2(c, a, b, d) + f2(d, a, b, c); 	// A+B+C+D 
    if (sum == 0)    															//if sum = 0
    {    
    
        cout << "oh! Something went wrong - please try again" << endl;    		//I add 
    }    
    return 0;    
}  

