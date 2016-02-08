
//test.c
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    if (N == 0) {
    	return -1;
    }
    long long sum = 0;
    int index = 0;
    
    for (index = 0; index < N; index++){
    	sum +=A[index];
    }
    
    long long LHS = 0 ;
    long long RHS = sum ;
    int stop = 0;
    int counter = 0;

    while(stop == 0 ){
    	if(LHS == RHS ){
    		stop = 1;
    		return counter;
    	}
    	if(counter == N){
    		return -1;
    		stop = 1;

    	}
    	else{
    		LHS = LHS + A[counter];
    		RHS = RHS - LHS - A[counter+1];
    		counter = counter + 1;
    	}
    }

    
}