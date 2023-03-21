#include <iostream>
#include <vector>

bool is_sorted_ascending(const std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

void	swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void	insert(std::vector<int>& v)
{
	int i, j;

	for (i = 1; i < v.size(); ++i) {
		for (j = i - 1; j >= 0; j--) {
			if (v[j] < v[j + 1])
				break ;
			else {
				swap(v[j], v[j + 1]);
			}
		}
	}
}

void	mergeInsert(std::vector<int>& v)
{
	int	i;
	int	size;
	std::vector<int> v1;
	std::vector<int> v2;
	size = v.size();
	if (size <= 5) {
		insert(v);
	}
	else {
		for (i = 0; i < size / 2; ++i)
			v1.push_back(v[i]);
		for(i = size / 2; i < size; ++i)
			v2.push_back(v[i]);
		mergeInsert(v1);
		mergeInsert(v2);
		int cnt1, cnt2;
		cnt1 = cnt2 = 0;
		for (i = 0; i < size; ++i)
		{
			if (cnt1 < v1.size() && (v2.size() == cnt2 || v1[cnt1] < v2[cnt2]))
				v[i] = v1[cnt1++];	
			else 
				v[i] = v2[cnt2++];
		}
	}
}

void	run(std::vector<int>& v) {
	mergeInsert(v);
	// for (int i = 0; i < v.size(); ++i) {
	// 	std::cout << v[i] << " ";
	// }
	std::cout << is_sorted_ascending(v);
}

int main(int ac, char **av)
{
	std::vector<int> v;
	int i;

	i = 1;
	for (; av[i]; ++i) {
		v.push_back(atoi(av[i]));
	}	
	run(v);
	return 0;
}