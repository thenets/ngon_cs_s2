int main()
{
	int age = 26;

	// Birthday
	{
		int timeInYears = 1;

		age += timeInYears;

		{
			int anotherYear = 1;
			age += anotherYear;
		}
	}

	bool tooOld;

	if (age > 18) {
		tooOld = 1;
	}

	// --
	// Playground
	// --

	// For some reason the boolean type can be trash value bigger than one.
	// I have no idea why.
	bool boolTest{};

	// It's possible to initialize a varible with all bits seted to zero using {}
	int intTest{};
	intTest = boolTest;

	// I don't know why but '25.5f' is equal to '25.0000000' in memory
	// but '48.1f' is equal to '48.0999985'
	float floatTest{};
	floatTest = 25.5f;
	floatTest = 48.1f;

	boolTest = floatTest;

	intTest = floatTest;
	floatTest = intTest;

	boolTest = floatTest;

	// It will ignore the float part of 'floatTest'
	age = age + floatTest;
	
	// Treated as 1 or 0
	age = age + boolTest;

	age = age;

}
