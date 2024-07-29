 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int number = 56;
 	int guessednumber;
 	bool isguessednumber = false;
 	
 	do{
 		cout << "Guess the number:";
 		cin  >> guessednumber;
 		
 		if(number > guessednumber)
 		{
 			cout<<"Actual number is greaterthan " << guessednumber << endl;
 			 isguessednumber = false;
 			
		 }
		 else if(number < guessednumber)
		 {
		 	cout <<"Actual number is less than " << guessednumber <<endl;
		 	isguessednumber = false;
		 }
		 else if (number == guessednumber) {
		 	cout << "You won!" << endl;
		 	isguessednumber = true;
		 }
		 else{
		 	cout <<"Error" << endl;
		 }
	 } while (isguessednumber == false);
}
