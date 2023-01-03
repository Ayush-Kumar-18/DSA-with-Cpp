// https://practice.geeksforgeeks.org/problems/count-digits5716/1

int evenlyDivides(int N){
        //code here
        int c = 0;
        int oriN = N;
        while(N>0){
            int rem = N%10;
            if(rem != 0 && oriN%rem == 0)
                c++;
            N /= 10;
        }
        return c;
    }