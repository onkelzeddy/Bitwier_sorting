#include "unit.h"

#pragma once
class q
{

public:
	q();
	~q();
	bool isEmpty();
	void push(int tmp);
	int pop();
	void sort();
	int getSortStep();
	void upSortStep();
	bool isSorted();



private:
	unit* head;
	int count;
	int max = 0;
	int sortStepCount = 1; 
	int disNum = 0; 
	int isSort = 0; 

};

	q::q() {
		head = nullptr;
		count = 0;
	}

	q::~q() {
		
	}

	bool q::isEmpty() {
		
		if (count == 0) {
			return true;
		}

		return false;
	}

	void q::push(int tmp) {

		if (tmp > max) {
			int tmp1 = tmp;
			max = tmp;
			disNum = 0;

			while (tmp1 != 0)
			{
				tmp1 = tmp1 / 10;
				disNum++;
			}
		}

		if (isEmpty()) {

			unit* newHead = new unit(tmp);
			head = newHead;

			count++;

			return;
			
		}

		else
		{


			unit* newUnit = new unit(tmp);

			unit* last = new unit;
			unit* tmp = new unit;

			last = head;

			while (last->getNext() != nullptr)
			{

				tmp = last->getNext();
				last = tmp;

			}

			count++;
			last->setNext(newUnit);
		
		}


	}


	int q::pop() {
		
		if (isEmpty()) {
			return -1;
		}

		else {

			if (count == 1) {
				int ret = head->getContent();
				delete head;
				count--;
				return ret;

			}

			else
			{
				int ret;

				unit* tmp = new unit;

				tmp = head->getNext();

				ret = head->getContent();
				count--;
				delete head;
				head = tmp;
				



				return ret;


			}



		}
	}

	void q::sort() {

		int* disArr[10];
		int counter[10];
		int* tmpArr;
		std::string tmpStr;
		int size = count;




		for (int i = 1; i <= disNum; i++)
		{


			for (int s = 0; s < 10; s++)
			{
				counter[s] = 0;
			}


			for (int j = 0; j < size; j++)
			{
				tmpStr = std::to_string(this->pop());


				if (tmpStr.length() < i)
				{
					if (counter[0] == 0)
					{
						counter[0]++;
						disArr[0] = new int[counter[0]];
						disArr[0][counter[0] - 1] = std::stoi(tmpStr);
					}
					else
					{
						counter[0]++;
						tmpArr = disArr[0];
						disArr[0] = new int[counter[0]];

						for (int s = 0; s < counter[0] - 1; s++) 
						{
							disArr[0][s] = tmpArr[s];
						}
						disArr[0][counter[0] - 1] = std::stoi(tmpStr);
					}


					continue;

				}

				if (counter[tmpStr[tmpStr.length() - i] - '0'] == 0)
				{
					
					counter[tmpStr[tmpStr.length() - i] - '0']++;
					disArr[tmpStr[tmpStr.length() - i] - '0'] = new int[counter[tmpStr[tmpStr.length() - i] - '0']];
					disArr[tmpStr[tmpStr.length() - i] - '0'][counter[tmpStr[tmpStr.length() - i] - '0'] - 1] = std::stoi(tmpStr);
				}
				else
				{
					counter[tmpStr[tmpStr.length() - i] - '0']++;
					tmpArr = disArr[tmpStr[tmpStr.length() - i] - '0'];
					disArr[tmpStr[tmpStr.length() - i] - '0'] = new int[counter[tmpStr[tmpStr.length() - i] - '0']];

					for (int s = 0; s < counter[tmpStr[tmpStr.length() - i] - '0'] - 1; s++)
					{
						disArr[tmpStr[tmpStr.length() - i] - '0'][s] = tmpArr[s];
					}
					disArr[tmpStr[tmpStr.length() - i] - '0'][counter[tmpStr[tmpStr.length() - i] - '0'] - 1] = std::stoi(tmpStr);
				}

			}





			for (int f = 0; f < 10; f++) 
			{
				for (int s = 0; s < counter[f]; s++)
				{
					this->push(disArr[f][s]);
				}
			}

		}

	}

	int q::getSortStep() {
		return sortStepCount;
	}
	
	void q::upSortStep() {
		if (sortStepCount != disNum) {
			sortStepCount++;
		}
	}
	
	bool q::isSorted() {
		isSort++;
		if (disNum + 1 == isSort) {
			return true;
		}
		else
		{
			return false;
		}
	}
	




