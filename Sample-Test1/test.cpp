#include "pch.h"
using namespace std;

void checkNumber(int num) {
	if (num % 2 == 0) {
		cout << num << " is even" << endl;
	}
	else {
		cout << num << " is odd" << endl;
	}
}

TEST(CheckNumberTest, EvenNumber) {
	testing::internal::CaptureStdout();
	checkNumber(4);
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "4 is even\n");
}

TEST(CheckNumberTest, OddNumber) {
	testing::internal::CaptureStdout();
	checkNumber(5);
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "5 is odd\n");
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
