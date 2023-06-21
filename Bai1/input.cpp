#include <iostream>
using namespace std;

int main() {
    //tôi sẽ tạo một biến có kiểu dữ liệu in và đặt tên cho nó là tuổi
    int tuoi;
    //tiếp theo tôi sẽ tạo một biến có kiểu dữ liệu là 1 chuỗi kí tự,đặt tên cho nó là name
    string name;
    //giờ tôi sẽ viết ra  chương trình nhập tên và tuổi trước rồi sau đó sẽ giải thích chương trình cho các bạn sau
    cout << "Nhap ten cua ban: ";
    cin >> name;
    cout << "Nhap tuoi cua ban: ";
    cin >> tuoi;
    //giờ tôi sẽ chạy thử chương trình
    //chương trình bị một cái lỗi là không in ra màn hình bất cứ thứ gì và bỏ qua phần nhập tưởi,giờ tôi sẽ fix nó
    cout << name << " \n" << tuoi << endl;
    // chương trình đã in ra được tên và tuổi
    //giờ tôi sẽ giải thích chương trình này cho các bạn
    //ở dòng cout << "nhap ten cua ban: "; là một dòng thông báo,tiếp theo cin >> name; nó sẽ thực hiện lệnh cho người dùng nhập tên của mình
    //tương tự với tuoi
    //còn dòng cout << name << "\n" << tuoi << endl; là nó xuất ra tên và tuổi của mình đã nhập
    // bài hôm nay tôi sẽ dạy đến đây thôi,cảm ơn các bạn đã xem,nếu các bạn thấy video này hay thì hãy để lại 1 like,1sub để tôi tiếp tục làm những video như thế này nhé
    
    return 0;
}