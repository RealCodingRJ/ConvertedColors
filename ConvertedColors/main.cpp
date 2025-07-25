#include "includes.cpp"


int main() {

	cout << "Enter Decimal: " << endl;

	int hexInput;
	 
	stringstream ss;
	cin >> hexInput;

	bool isHex = (hexInput != 0);
	bool isHexEnaled = isHex ? true : false;

	while (isHexEnaled) {

		if (isHexEnaled) {

			ss << hex << hexInput;

			string hexString = ss.str();

			cout << "Hex " << hexString << endl;
			cout << "Decinal: " << hexInput << endl;

			isHexEnaled = !isHexEnaled;
		}
		
		isHexEnaled = !isHexEnaled;
	}

	system("pause > 0");
	return 0;
}