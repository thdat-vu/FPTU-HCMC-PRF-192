//thật ra làm theo đề ko có gì sai
//nhưng nếu NGƯỜI DÙNG NHẬP SỐ THỨ 1 LỚN HƠN SỐ THỨ 2 THÌ SAO ???
//GIẢI PHÁP LÀ THỬ TẠO RA 1 HÀM SWAP XEM.
//swap function
//hàm không đầu vào cũng chẳng có trả ra
void swap(int &a, int &b)	//phải nghiên cứu thêm chứ giáo trình trên lớp ko đủ đâu
							//hàm(&b) trong () gọi là tham trị
							//là 1 thứ còn mạnh hơn cả pointers. Chỉ có CPP mới có trò này
{  int t = a ;	//tạo biến mồi t(t nghĩa là tạm thời) là chỗ nhét tạm giá trị a
   a = b;
   b = t;
}