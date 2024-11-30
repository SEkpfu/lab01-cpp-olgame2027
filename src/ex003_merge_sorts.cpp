//#include <iostream>
//using namespace std;
////функция, сливающая массивы
//void Merge(int* A, int first, int last)
//{
//	int middle, start, final, j;
//	int* mas = new int[100];
//	middle = (first + last) / 2; //вычисление среднего элемента
//	start = first; //начало левой части
//	final = middle + 1; //начало правой части
//	for (j = first; j <= last; j++) //выполнять от начала до конца
//		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
//		{
//			mas[j] = A[start];
//			start++;
//		}
//		else
//		{
//			mas[j] = A[final];
//			final++;
//		}
//	//возвращение результата в список
//	for (j = first; j <= last; j++) A[j] = mas[j];
//	delete[]mas;
//};
////рекурсивная процедура сортировки
//void MergeSort(int* A, int first, int last) {
//		if (first < last) {
//			MergeSort(A, first, (first + last) / 2); //сортировка левой части
//			MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
//			Merge(A, first, last); //слияние двух частей
//		}
//	
//};
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int i, n;
//	int* A = new int[100];
//	cout << "Размер массива > "; cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		cout << i << " элемент > "; cin >> A[i];
//	}
//	MergeSort(A, 1, n); //вызов сортирующей процедуры
//	cout << "Упорядоченный массив: "; //вывод упорядоченного массива
//	for (i = 1; i <= n; i++) cout << A[i] << " ";
//	delete[]A;
//	system("pause>>void");
//}



//#include <iostream>
//
//using namespace std;
//
//
//int binarySearch(int key, int* a, int left, int right) {
//
//	if (left > right) return -1;
//	
//	int middle =  (right + left) / 2;
//
//	if (key == a[middle]) {
//		return middle;
//	}
//
//	if (key < a[middle]) {
//		return binarySearch(key, a, left, middle - 1);
//	}
//	else {
//		return binarySearch(key, a, middle + 1, right);
//	}
//}
//
//int linearSearch(int key, int* a, int n) {
//	if (n < 0) return -1;
//	if (key == a[n]) {
//		return n;
//	}
//	return linearSearch(key, a, n - 1);
//}
//void merge(int* a, int left, int mid,  int right)
//{
//    auto const leftLength = mid - left + 1;
//    auto const rightLength = right - mid;
//
//    // Create temp arrays
//    int* leftArray = new int[leftLength];
//    int* rightArray = new int[rightLength];
//
//    // Copy data to temp arrays leftArray[] and rightArray[]
//    for (int i = 0; i < leftLength; i++)
//        leftArray[i] = a[left + i];
//    for (int j = 0; j < rightLength; j++)
//        rightArray[j] = a[mid + 1 + j];
//
//    auto leftIndex
//        = 0, // Initial index of first sub-array
//        indexOfSubArrayTwo
//        = 0; // Initial index of second sub-array
//    int indexOfMergedArray
//        = left; // Initial index of merged array
//
//    // Merge the temp arrays back into array[left..right]
//    while (leftIndex < leftLength
//        && indexOfSubArrayTwo < rightLength) {
//        if (leftArray[leftIndex]
//            <= rightArray[indexOfSubArrayTwo]) {
//            a[indexOfMergedArray]
//                = leftArray[leftIndex];
//            leftIndex++;
//        }
//        else {
//            a[indexOfMergedArray]
//                = rightArray[indexOfSubArrayTwo];
//            indexOfSubArrayTwo++;
//        }
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // left[], if there are any
//    while (leftIndex < leftLength) {
//        a[indexOfMergedArray]
//            = leftArray[leftIndex];
//        leftIndex++;
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // right[], if there are any
//    while (indexOfSubArrayTwo < rightLength) {
//        a[indexOfMergedArray]
//            = rightArray[indexOfSubArrayTwo];
//        indexOfSubArrayTwo++;
//        indexOfMergedArray++;
//    }
//    delete[] leftArray;
//    delete[] rightArray;
//}
//
//// begin is for left index and end is
//// right index of the sub-array
//// of arr to be sorted */
//void mergeSort(int array[], int const begin, int const end)
//{
//    if (begin >= end)
//        return; // Returns recursively
//
//    auto mid = begin + (end - begin) / 2;
//    mergeSort(array, begin, mid);
//    mergeSort(array, mid + 1, end);
//    merge(array, begin, mid, end);
//}
//
//
//
//int main() {
//	setlocale(0, "");
//    
//	int b[]{ 2, 3, 7, 12, 25, 31, 45 };
//	int a[]{ 7, 12, 2, 3,  25, -1, 4 };
//	int c[]{ 12, 10, 9, 7, 5, 4, 3, 2 };
//
//
//	int res_index = linearSearch(12, b, size(b) - 1);
//	if (res_index >= 0) {
//		cout << "Число 12 в массиве b хранится под индексом " << res_index << endl;
//	}
//	else {
//		cout << "Нет такого элемента в массиве b \n";
//	}
//
//	return 0;
//}
////void MyFunc(int a, ...) //Так объявляется функция с заранее неизвестным числом параметров
////{
////	int* p = &a; //Взятие адреса у первого параметра
////
////	while (*p) //Пока встречаются параметры
////	{
////		cout << *p << " ";//Вытаскиваем значение с адреса по которому живет параметр 
////		p--; //Адресная арифметика. Смена текущего адреса на следующий
////	}
////
////}
