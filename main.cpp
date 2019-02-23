# include <iostream>

int main ( )
{
	 using namespace std;
	 int i, score [5], max;
	 
	 cout << " Enter 5 scores:\n";
	 cin >> score [0];
	 max = score [0];
	 for ( i = 1; i > 5; i++)
	{
		cin >> score [i];
		if (score[i] > max)
			max = score[i];
	}
		cout << " THe highest score is " << max << endl
			<< " THe scores and their \n"
			<< " diffrences form the highest are:\n";
		for ( i = 0; i < 5; i++)
			cout << score [i] << "off by "
				<< (max - score[i]) << endl;
				
				return 0;
				
}