#include<iostream>
using namespace std;

/*   Pattern1:
    *****
    *****
    *****
    *****
    *****    
*/
void pattern1 (int n) {
    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*   Pattern2:
     *
     **
     ***
     ****
     *****    
*/
void pattern2(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/* Pattern 3: 
    1
    12
    123
    1234
    12345 
*/
void pattern3(int n){
    for(int i = 1; i<=  n; i++){
        for(int j = 1; j<= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

/* Pattern 4:
    1
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5
*/
void pattern4(int n){
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
}

/* Pattern 5:
    * * * * *
    * * * * 
    * * * 
    * *  
    *          
 */
void pattern5(int n){
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<= n-i+1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
}

/* Pattern 6:
    1 2 3 4 5
    1 2 3 4
    1 2 3 
    1 2  
    1          
*/
void pattern6(int n){
    for(int i = 1; i<=n; i++){
	       for(int j = 1; j<=n-i+1; j++){
	           cout<<j<<" ";
	       }
	       cout<<endl;
	   }
}

/* Pattern 7:
        *
       ***  
      *****
     *******
    *********
*/
void pattern7(int n){
    for(int i = 1; i<= n; i++){
            for(int s = 1; s<=n-i; s++){
                cout<<" ";
            }
            for(int j = 1;j<=i; j++){
                cout<<"*";
            }
            for(int j = i-1; j>0; j--){
                cout<<"*";
            }
            cout<<endl;
        }
}

/* Pattern 8:
     * * * * *
      * * * *
       * * *
        * *
         *
*/
void pattern8(int n){
    for(int i = 1; i<= n; i++){
	        for(int j = 1; j<= i-1; j++){
	            cout<<" ";
	        }
    	    for(int j = 1; j<= n-i+1; j++){
    	        cout<<"*";
    	    }
    	    for(int j = 1; j<=n-i; j++){
    	        cout<<"*";
    	    }
	    
	        cout<<endl;
	    }
}

/* Pattern 9:
         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/
void pattern9(int n){
    for(int i = 1; i<=n; i++){
            for(int s = 1; s<= n-i; s++){
                cout<<" ";
            }
            for(int j = 1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = n+1; i<= 2*n; i++){
            for(int s = 1; s<= i-n-1; s++){
                cout<<" ";
            }
            for(int j = 1; j<= n-i+n+1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
}

/* Pattern 10:
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
void pattern10(int n){
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = n+1; i<= 2*n-1; i++){
            for(int j = 1; j<= n-i+n; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
}

/* Pattern 11:
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1   
*/
void pattern11(int n){
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<= i; j++){
                if((i+j) %2 == 0)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
            cout<<endl;
        }
}

/* Pattern 12:
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/
void pattern12(int n){
    for(int i = 1; i<= n; i++){
            for(int j = 1; j<= i; j++){
                cout<<j<<" ";
            }
            for(int s = 1; s<= n-i; s++){
                cout<<"  ";
            }
            for(int s = 1; s<= n-i; s++){
                cout<<"  ";
            }
            int k = i;
            for(int j = 1; j<= i; j++){
                cout<<k--<<" ";
            }
            cout<<endl;
        }
}

/* Pattern 13:
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15
*/
void pattern13(int n){
    int c = 1;
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<= i; j++){
                cout<<c<<" ";
                c++;
            }
            cout<<endl;
        }
}

/* Pattern 14:
    A
    AB
    ABC
    ABCD
    ABCDE
*/
void pattern14(int n){
    char ch = 'A';
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<= i; j++){
                cout<<char(ch+j-1);
            }
            cout<<endl;
        }
}

/* Pattern 15:
    ABCDE
    ABCD
    ABC
    AB
    A
*/
void pattern15(int n){
    char ch = 'A';
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<= n-i+1; j++){
                cout<<char(ch+j-1);
            }
            cout<<endl;
        }
}

/* Pattern 16:
    A
    BB
    CCC
    DDDD
    EEEEE
*/
void pattern16(int n){
    char ch = 'A';
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<= i; j++){
                cout<<char(ch+i-1);
            }
            cout<<endl;
        }
}

/* Pattern 17:
       A
      ABA
     ABCBA
    ABCDCBA
*/
void pattern17(int n){
    for(int i = 1; i<= n; i++){
            for(int s = 1; s<=n-i; s++){
                cout<<" ";
            }
            char ch = 'A';
            for(int j = 1; j<= i; j++){
                cout<<char(ch++);
            }
            for(int j = 1; j<= i-1; j++){
                cout<<char(--ch - 1);
            }
            cout<<endl;
        }
}

/* Pattern 18:
    E
    E D
    E D C
    E D C B
    E D C B A
*/
void pattern18(int n){
    for(int i = 1; i<= n; i++){
            char ch = 'A', c = 0;
            c = ch+n-1;
            for(int j = 1; j<= i; j++){
                cout<<char(c--)<< " ";
            }
            cout<<endl;
        }
}

/* Pattern 19:
     **********
     ****  ****
     ***    ***
     **      **
     *        *
     *        *
     **      **
     ***    ***
     ****  ****
     **********
*/
void pattern19(int n){
    for(int i = 1; i<= n; i++){
            for(int j = 1; j<= n-i+1; j++){
                cout<<"*";
            }
            for(int s = 1; s<= i-1; s++){
                cout<<" ";
            }
            for(int s = 1; s<= i-1; s++){
                cout<<" ";
            }
            for(int j = 1; j<= n-i+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = n+1; i<= 2*n; i++){
            for(int j = 1; j<= i-n; j++){
                cout<<"*";
            }
            for(int s = 1; s<= n-i+n; s++){
                cout<<" ";
            }
            for(int s = 1; s<= n-i+n; s++){
                cout<<" ";
            }
            for(int j = 1; j<= i-n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
}

/* Pattern 20:
     *        *
     **      **
     ***    ***
     ****  ****
     **********
     ****  ****
     ***    ***
     **      **
     *        *
*/
void pattern20(int n){
    for(int i = 1; i<= n; i++){
            for(int j = 1; j<= i; j++){
                cout<<"*";
            }
            for(int s = 1; s<= n-i; s++){
                cout<<" ";
            }
            for(int s = 1; s<= n-i; s++){
                cout<<" ";
            }
            for(int j = 1; j<= i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = n+1; i<= 2*n-1; i++){
            for(int j = 1; j<= n-i+n; j++){
                cout<<"*";
            }
            for(int s = 1; s<= i-n; s++){
                cout<<" ";
            }
            for(int s = 1; s<= i-n; s++){
                cout<<" ";
            }
            for(int j = 1; j<= n-i+n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
}

/* pattern 21:
    ****
    *  *
    *  *
    ****    
*/
void pattern21(int n){
    for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if (j == n || j == 1 || i == 1 || i == n)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
}

/* pattern 22:
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4   
*/
void pattern22(int n){
    int origN = n;
        n = 2*n-1;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                int atEveryIndex = origN - min( min(i-1, j-1) , min(n-i, n-j));
                cout<<atEveryIndex<<" ";
            }
            cout<<endl;
        }
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    pattern22(n);
    return 0;
}