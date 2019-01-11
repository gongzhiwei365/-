#pragma once
class mem {							//�ڴ�ṹ
private:
	char page[N];	//�ڴ������
	int free_page;	//���п���
public:
	void display();	//��ʾ�ڴ�ʹ�����
	int* assign_mem(pro pro_now);
	void p_delete(char name);
	mem();
	char* get_page();
	void set_page(char t,int i);

};
char* mem::get_page() {
	return page;
}
void mem::set_page(char t,int i) {
	this->page[i] = t;
}
mem m;
void mem::display() {				//��ʾ��ǰ�ڴ�ҳ��ʹ�����
	cout << endl << "��ǰ�ڴ�ʹ�������";
	for (int i = 0; i < N; i++) {
		if (i % 10 == 0) {
			cout << endl;
		}
		cout << this->page[i] << "   ";
	}
	cout << endl;
}
int* mem::assign_mem(pro pro_now)	//���̷����ڴ��㷨
{
	int y[N];
	if (this->free_page > pro_now.get_size()) {
		for (int i = 0; i < pro_now.get_size(); i++) {
			for (int n = 0; n < N; n++) {
				if (page[n] == '0' && this->free_page > pro_now.get_size()) {
					y[i] = n;
					page[n] = pro_now.get_name();
					this->free_page--;
					break;
				}
			}
		}
	}
	else {
		cout << "����ҳ�治�㣬�޷����䣡���Ȼ��ս��̡�" << endl;
	}
	return y;
}
void mem::p_delete(char name) {
	for (int i = 0; i < N; i++) {
		if (this->page[i] == name) {
			this->page[i] = '0';
			this->free_page++;
		}
	}
}
mem::mem() {
	this->free_page = 0;
	for (int i = 0; i < N; i++) {		//��ʼ���ڴ��ʹ�����
		this->page[i] = '0';
		this->free_page++;
	}
}
