#define DIASMES 30
#define MODELOSTEL 10
#define CANTPROMOTORES 40
typedef struct ventas {
    int legajoPromotor;
    int idEquipo;
    int cant;
    int diaVenta;
} ST_VENTAS;
typedef struct telefonos {
    int idEquipo;
    string descripcion;
    double precio;
} ST_TELEFONOS;
typedef struct promotores {
    int legajoPromotor;
    string nombre;
    double comision;
    double ganancias;
} ST_PROMOTORES;