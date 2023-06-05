struct Diem2D {
	double x = 0;
	double y = 0;
};

struct TamGiac {
	Diem2D a, b, c;
};

Diem2D ReadPoint();

double Distance(Diem2D a, Diem2D b);

double ChuViTamGiac(TamGiac tamgiac);

double DienTichTamGiac(TamGiac tamgiac);

bool CheckBenTrong(TamGiac tamgiac, Diem2D d);