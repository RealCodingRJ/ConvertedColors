#include "includes.cpp"


int main() {

	cout << "Enter Decimal: " << endl;

	int hexInput;
	 
	stringstream ss;
	cin >> hexInput;

	bool isHex = (hexInput != 0);
	bool isHexEnaled = isHex ? true : false;

	bool isHexDisabled = !isHexEnaled;

	while (isHexEnaled) {

		if (isHexEnaled) {

			ss << hex << hexInput;

			string hexString = ss.str();

			cout << "Hex " << hexString << endl;
			cout << "Decinal: " << hexInput << endl;

			ofstream file("info.converted");

			if (file.is_open()) {

				file << hexInput;
				file.close();
			}

			isHexEnaled = !true;
		}
		
		if (isHexDisabled) {

			ofstream file("info.converted");

			if (file.is_open()) {

				file << hexInput;
				file.close();
			}

			isHexEnaled = !true;
			break;

		}
	}

	system("pause > 0");
	return 0;
}