#pragma once
class pro {							//���̽ṹ
private:
	char name;	//������
	int page_num;		//��������ҳ��
	int table[N];		//����ҳ��
	pro *next;
public:
	friend class syste;
	int* get_table() {
		return this->table;
	}
	int get_size() {
		return this->page_num;
	}
	char get_name() {
		return this->name;
	}
	void set_name(char name) {
		this->name = name;
	}
	void set_num(int num) {
		this->page_num = num;
	}
	void set_table(int* p) {
		for (int i = 0; i < this->page_num; i++) {
			this->table[i] = *(p + i);
		}
	}
};