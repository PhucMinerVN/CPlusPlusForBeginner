//đầu tiên chúng ta sẽ phải include thư viện iostream
#include <iostream>
using namespace std;

//tạo ra hàm main
int main() {
    //để in ra màn hình chúng ta sẽ sử dụng câu lệnh cout 
    cout << "Hello World!" << endl;
    //đầu ra của nó sẽ là hello world
    //tiếp theo đó là về biến và kiểu dữ liệu
    //trong C++ cũng có khá nhiều kiểu dữ liệu,nhưng vì đây là nhập môn nên tôi sẽ chỉ dạy một số kiểu dữ liệu cơ bản thôi
    // đầu tiên là kiểu dữ liệu int
    // int trong C++ nghĩa là Integer,là một kiểu dữ liệu số nguyên
    // để có thể khởi tạo ra một biến có kiểu dữ liệu int thì chúng ta làm như sau:
    int a = 5;
    //ở đây tôi tạo ra biến số nguyên và đặt tên nó là a,tôi cho giá trị của nó là 5
    // giờ tôi sẽ in biến này ra màn hình thử nhé
    cout << a << endl;
    //đầu ra của nó là Hello World! và 5
    // câu lệnh endl mà tôi thêm vào là nó sẽ xuống dòng
    //kiểu dữ liệu tiếp theo sẽ là kiểu dữ liệu số thực
    // số thực ở đây sẽ là các số như: 0.5 3.5, v.v
    // số thực thường thì chúng ta sẽ sử dụng: Float,double
    // ví dụ đơn giản như sau
    float diemvatli = 3.5;
    // ở đây tôi khởi tạo một biến số thực và đặt tên cho nó là điểm vật lí,tôi cho nó giá trị là 3.5 (điểm vật lí của MCI)
    //giờ tôi sẽ thử in nó ra màn hình 
    cout << diemvatli << endl;
    // đầu ra của chương trình lúc này đã có thêm 3.5,nghĩa là tôi đã xuất điểm vật lí ra màn hình
    //kiểu dữ liệu tiếp theo là Bool
    // bool là kiểu dữ liệu chỉ có 2 giá trị là True Hoặc False
    // các bạn có thể tạo ra một biến có kiểu dữ liệu Bool như sau
    bool c = true;
    bool d = false;
    //ở đây tôi tạo ra 2 biến có cùng kiểu dữ liệu bool,với 2 giá trị khác nhau là true và false
    // giờ tôi sẽ xuất ra màn hình 
    cout << c << endl;
    cout << d << endl;
    //  như các bạn đã thấy thì nó xuất ra 1 và 0,1 là true và 0 là false,tương ứng với c = true và d = false
    // kiểu dữ liệu tiếp theo là string
    // string là 1 kiểu dữ liệu chuỗi kí tự
    // ví dụ:
    string name = "Nguyen Hoang Phuc";
    // ở đây tôi đã tạo ra một biến có kiểu dữ liệu là chuỗi kí tự,tôi đặt tên nó là name,cho nó một giá trị là Nguyễn Hoàng Phúc (tên thật của ông JaboVN)
    // giờ tôi sẽ in nó ra màn hình
    cout << name << endl;
    // đầu ra của chương trình lúc này có thêm Nguyen Hoang Phuc,nghĩa là tôi đã in ra được biến name
    //tiếp theo tôi sẽ dạy các bạn về input trong C++
    // về lí thuyết,câu lệnh để nhập trong C++ là cin 
    //để tôi thực hiện cho các bạn một ví dụ trong file mới
    return 0;
}