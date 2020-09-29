#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {

    map<string, vector<string>> clothesDictionary;  // key value�� ���� map STL
    vector<int> keySize;                            // value�� ������ ���� vector
    vector<vector<string>>::iterator iterClothes;
    map<string, vector<string>>::iterator iterClothesDictionary;


    for (iterClothes = clothes.begin(); iterClothes != clothes.end(); iterClothes++) {
        clothesDictionary[(*iterClothes)[1]].push_back((*iterClothes)[0]);     // ������ key�� �� ������ value�� ����
    }

    int answer = 1;
    int i = 0;

    for (iterClothesDictionary = clothesDictionary.begin(); iterClothesDictionary != clothesDictionary.end(); iterClothesDictionary++) {

        keySize.push_back(iterClothesDictionary->second.size() + 1);        // ������ �� + 1(�ƹ��͵� ���þ���)�� �ִ´�.
        answer *= keySize[i];
        i++;
    }
    // ��� ���� �ƹ��͵� �������� ���� ����� ���� ��
    return answer - 1;
}

int main(void)
{
    vector<vector<string>> test_1 = { {"yellow_hat", "headgear"} ,{"blue_sunglasses", "eyewear"},{"green_turban", "headgear"} };
    vector<vector<string>> test_2 = { {"crow_mask", "face"}, { "blue_sunglasses", "face" }, { "smoky_makeup", "face" } };
    int returnAnswer = solution(test_1);
    cout << boolalpha << returnAnswer << endl;

    return 0;
}