Cho đoạn lệnh sau.
char c = ‘A', d = ‘B';
char* p1 = &c;
char* p2 = &d;
char* p3;
Giả sử địa chỉ của c là 0x1234, địa chỉ của b là 0x5678. Hỏi output của đoạn lệnh sau là gì?
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;

*p3 = B , p3 = 0x5678
*p3 = A , p3 = 0x1234
*p1 = B, p1 = 0x1234

Cho các lệnh sau.
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;

(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5;

Lệnh *p = 5; sẽ gán cho biến i giá trị 5. Khi thực hiện lệnh này, giá trị của biến i sẽ thay đổi từ 4 thành 5. Các lệnh khác không thay đổi giá trị của i.