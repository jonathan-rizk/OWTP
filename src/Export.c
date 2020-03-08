#ifndef OWTP_H
	#define OWTP_H
	#include "OWTP.h"
#endif

#define DLL_EXPORT __declspec(dllexport)

#if _DEBUG
	//Boundary - Around the Metastable Region:

	DLL_EXPORT double h1_prime(double entr)
	{
		return _h1_prime(entr);
	}
	DLL_EXPORT double h3a_prime(double entr)
	{
		return _h3a_prime(entr);
	}
	DLL_EXPORT double h2ab_s_2prime(double entr)
	{
		return _h2ab_s_2prime(entr);
	}
	DLL_EXPORT double h2c3b_s_2prime(double entr)
	{
		return _h2c3b_s_2prime(entr);
	}
	DLL_EXPORT double hB13_s(double entr)
	{
		return _hB13_s(entr);
	}
	DLL_EXPORT double TB23_s(double enth, double entr)
	{
		return _TB23_s(enth, entr);
	}

	//Boundary - Region 2 & 3:

	DLL_EXPORT double P_R2_R3_b(double temp)
	{
		return _P_R2_R3_b(temp);
	}
	DLL_EXPORT double T_R2_R3_b(double press)
	{
		return _T_R2_R3_b(press);
	}

	//Boundary - Region 3 & 4:

	DLL_EXPORT double pSat_R3_R4_b(double temp)
	{
		return _pSat_R3_R4_b(temp);
	}
	DLL_EXPORT double tSat_R3_R4_b(double press)
	{
		return _tSat_R3_R4_b(press);
	}
	DLL_EXPORT double pSat_s_R3_R4(double entr)
	{
		return _pSat_s_R3_R4(entr);
	}

	//REGION 1:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_P_T_R1(double press, double temp)
	{
		return _v_P_T_R1(press,temp);
	}
	DLL_EXPORT double u_P_T_R1(double press, double temp)
	{
		return _u_P_T_R1(press,temp);
	}
	DLL_EXPORT double s_P_T_R1(double press, double temp)
	{
		return _s_P_T_R1(press,temp);
	}
	DLL_EXPORT double h_P_T_R1(double press, double temp)
	{
		return _h_P_T_R1(press,temp);
	}
	DLL_EXPORT double cp_P_T_R1(double press, double temp)
	{
		return _cp_P_T_R1(press,temp);
	}
	DLL_EXPORT double cv_P_T_R1(double press, double temp)
	{
		return _cv_P_T_R1(press,temp);
	}
	DLL_EXPORT double w_P_T_R1(double press, double temp)
	{
		return _w_P_T_R1(press,temp);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double v_P_h_R1(double press, double enthalpy)
	{
		return _v_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double u_P_h_R1(double press, double enthalpy)
	{
		return _u_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double s_P_h_R1(double press, double enthalpy)
	{
		return _s_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double T_P_h_R1(double press, double enthalpy)
	{
		return _T_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double cp_P_h_R1(double press, double enthalpy)
	{
		return _cp_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double cv_P_h_R1(double press, double enthalpy)
	{
		return _cv_P_h_R1(press, enthalpy);
	}
	DLL_EXPORT double w_P_h_R1(double press, double enthalpy)
	{
		return _w_P_h_R1(press, enthalpy);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double v_P_s_R1(double press, double entropy)
	{
		return _v_P_s_R1(press, entropy);
	}
	DLL_EXPORT double u_P_s_R1(double press, double entropy)
	{
		return _u_P_s_R1(press, entropy);
	}
	DLL_EXPORT double h_P_s_R1(double press, double entropy)
	{
		return _h_P_s_R1(press, entropy);
	}
	DLL_EXPORT double T_P_s_R1(double press, double entropy)
	{
		return _T_P_s_R1(press, entropy);
	}
	DLL_EXPORT double cp_P_s_R1(double press, double entropy)
	{
		return _cp_P_s_R1(press, entropy);
	}
	DLL_EXPORT double cv_P_s_R1(double press, double entropy)
	{
		return _cv_P_s_R1(press, entropy);
	}
	DLL_EXPORT double w_P_s_R1(double press, double entropy)
	{
		return _w_P_s_R1(press, entropy);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double v_h_s_R1(double enthalpy, double entropy)
	{
		return v_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R1(double enthalpy, double entropy)
	{
		return u_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double P_h_s_R1(double enthalpy, double entropy)
	{
		return P_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R1(double enthalpy, double entropy)
	{
		return T_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R1(double enthalpy, double entropy)
	{
		return cp_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R1(double enthalpy, double entropy)
	{
		return cv_R1_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R1(double enthalpy, double entropy)
	{
		return w_R1_h_s(enthalpy, entropy);
	}

	//REGION 2:
	//properties as functions of temperature and pressure

	DLL_EXPORT double v_T_P_R2(double temp, double press)
	{
		return v_R2_T_P(temp, press);
	}
	DLL_EXPORT double u_T_P_R2(double temp, double press)
	{
		return u_R2_T_P(temp, press);
	}
	DLL_EXPORT double s_T_P_R2(double temp, double press)
	{
		return s_R2_T_P(temp, press);
	}
	DLL_EXPORT double h_T_P_R2(double temp, double press)
	{
		return h_R2_T_P(temp, press);
	}
	DLL_EXPORT double cp_T_P_R2(double temp, double press)
	{
		return cp_R2_T_P(temp, press);
	}
	DLL_EXPORT double cv_T_P_R2(double temp, double press)
	{
		return cv_R2_T_P(temp, press);
	}
	DLL_EXPORT double w_T_P_R2(double temp, double press)
	{
		return w_R2_T_P(temp, press);
	}

	//properties as functions of pressure and enthalpy

	DLL_EXPORT double T_P_h_R2(double press, double enth)
	{
		return T_R2_P_h(press, enth);
	}
	DLL_EXPORT double v_P_h_R2(double press, double enth)
	{
		return v_R2_P_h(press, enth);
	}
	DLL_EXPORT double u_P_h_R2(double press, double enth)
	{
		return u_R2_P_h(press, enth);
	}
	DLL_EXPORT double s_P_h_R2(double press, double enth)
	{
		return s_R2_P_h(press, enth);
	}
	DLL_EXPORT double cp_P_h_R2(double press, double enth)
	{
		return cp_R2_P_h(press, enth);
	}
	DLL_EXPORT double cv_P_h_R2(double press, double enth)
	{
		return cv_R2_P_h(press, enth);
	}
	DLL_EXPORT double w_P_h_R2(double press, double enth)
	{
		return w_R2_P_h(press, enth);
	}

	//properties as functions of pressure and entropy

	DLL_EXPORT double T_P_s_R2(double press, double entr)
	{
		return T_R2_P_s(press, entr);
	}
	DLL_EXPORT double v_P_s_R2(double press, double entr)
	{
		return v_R2_P_s(press, entr);
	}
	DLL_EXPORT double u_P_s_R2(double press, double entr)
	{
		return u_R2_P_s(press, entr);
	}
	DLL_EXPORT double h_P_s_R2(double press, double entr)
	{
		return h_R2_P_s(press, entr);
	}
	DLL_EXPORT double cp_P_s_R2(double press, double entr)
	{
		return cp_R2_P_s(press, entr);
	}
	DLL_EXPORT double cv_P_s_R2(double press, double entr)
	{
		return cv_R2_P_s(press, entr);
	}
	DLL_EXPORT double w_P_s_R2(double press, double entr)
	{
		return w_R2_P_s(press, entr);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double P_h_s_R2(double enthalpy, double entropy)
	{
		return P_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double T_h_s_R2(double enthalpy, double entropy)
	{
		return T_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double v_h_s_R2(double enthalpy, double entropy)
	{
		return v_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double u_h_s_R2(double enthalpy, double entropy)
	{
		return u_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cp_h_s_R2(double enthalpy, double entropy)
	{
		return cp_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double cv_h_s_R2(double enthalpy, double entropy)
	{
		return cv_R2_h_s(enthalpy, entropy);
	}
	DLL_EXPORT double w_h_s_R2(double enthalpy, double entropy)
	{
		return w_R2_h_s(enthalpy, entropy);
	}

	//Region 3:
	//subregion boundary equations T(P)

	DLL_EXPORT double T3ab_v_T_P(double pressure)
	{
		return _T3ab_v_T_P(pressure);
	}
	DLL_EXPORT double T3cd_v_T_P(double pressure)
	{
		return _T3cd_v_T_P(pressure);
	}
	DLL_EXPORT double T3ef_v_T_P(double pressure)
	{
		return _T3ef_v_T_P(pressure);
	}
	DLL_EXPORT double T3gh_v_T_P(double pressure)
	{
		return _T3gh_v_T_P(pressure);
	}
	DLL_EXPORT double T3ij_v_T_P(double pressure)
	{
		return _T3ij_v_T_P(pressure);
	}
	DLL_EXPORT double T3jk_v_T_P(double pressure)
	{
		return _T3jk_v_T_P(pressure);
	}
	DLL_EXPORT double T3mn_v_T_P(double pressure)
	{
		return _T3mn_v_T_P(pressure);
	}
	DLL_EXPORT double T3op_v_T_P(double pressure)
	{
		return _T3op_v_T_P(pressure);
	}
	DLL_EXPORT double T3qu_v_T_P(double pressure)
	{
		return _T3qu_v_T_P(pressure);
	}
	DLL_EXPORT double T3rx_v_T_P(double pressure)
	{
		return _T3rx_v_T_P(pressure);
	}
	DLL_EXPORT double T3uv_v_T_P(double pressure)
	{
		return _T3uv_v_T_P(pressure);
	}
	DLL_EXPORT double T3wx_v_T_P(double pressure)
	{
		return _T3wx_v_T_P(pressure);
	}

	//subregion boundary equations v(P,T)

	DLL_EXPORT double va_P_T(double press, double temp)
	{
		return _va_P_T(press,temp);
	}
	DLL_EXPORT double vb_P_T(double press, double temp)
	{
		return _vb_P_T(press,temp);
	}
	DLL_EXPORT double vc_P_T(double press, double temp)
	{
		return _vc_P_T(press,temp);
	}
	DLL_EXPORT double vd_P_T(double press, double temp)
	{
		return _vd_P_T(press,temp);
	}
	DLL_EXPORT double ve_P_T(double press, double temp)
	{
		return _ve_P_T(press,temp);
	}
	DLL_EXPORT double vf_P_T(double press, double temp)
	{
		return _vf_P_T(press,temp);
	}
	DLL_EXPORT double vg_P_T(double press, double temp)
	{
		return _vg_P_T(press,temp);
	}
	DLL_EXPORT double vh_P_T(double press, double temp)
	{
		return _vh_P_T(press,temp);
	}
	DLL_EXPORT double vi_P_T(double press, double temp)
	{
		return _vi_P_T(press,temp);
	}
	DLL_EXPORT double vj_P_T(double press, double temp)
	{
		return _vj_P_T(press,temp);
	}
	DLL_EXPORT double vk_P_T(double press, double temp)
	{
		return _vk_P_T(press,temp);
	}
	DLL_EXPORT double vl_P_T(double press, double temp)
	{
		return _vl_P_T(press,temp);
	}
	DLL_EXPORT double vm_P_T(double press, double temp)
	{
		return _vm_P_T(press,temp);
	}
	DLL_EXPORT double vn_P_T(double press, double temp)
	{
		return _vn_P_T(press,temp);
	}
	DLL_EXPORT double vo_P_T(double press, double temp)
	{
		return _vo_P_T(press,temp);
	}
	DLL_EXPORT double vp_P_T(double press, double temp)
	{
		return _vp_P_T(press,temp);
	}
	DLL_EXPORT double vq_P_T(double press, double temp)
	{
		return _vq_P_T(press,temp);
	}
	DLL_EXPORT double vr_P_T(double press, double temp)
	{
		return _vr_P_T(press,temp);
	}
	DLL_EXPORT double vs_P_T(double press, double temp)
	{
		return _vs_P_T(press,temp);
	}
	DLL_EXPORT double vt_P_T(double press, double temp)
	{
		return _vt_P_T(press,temp);
	}
	DLL_EXPORT double vu_P_T(double press, double temp)
	{
		return _vu_P_T(press,temp);
	}
	DLL_EXPORT double vv_P_T(double press, double temp)
	{
		return _vv_P_T(press,temp);
	}
	DLL_EXPORT double vw_P_T(double press, double temp)
	{
		return _vw_P_T(press,temp);
	}
	DLL_EXPORT double vx_P_T(double press, double temp)
	{
		return _vx_P_T(press,temp);
	}
	DLL_EXPORT double vy_P_T(double press, double temp)
	{
		return _vy_P_T(press,temp);
	}
	DLL_EXPORT double vz_P_T(double press, double temp)
	{
		return _vz_P_T(press,temp);
	}

	//subregion boundary equations T(P,h)

	DLL_EXPORT double T_R3a_P_h(double press, double enth)
	{
		return _T_R3a_P_h(press,enth);
	}
	DLL_EXPORT double T_R3b_P_h(double press, double enth)
	{
		return _T_R3b_P_h(press,enth);
	}

	//subregion boundary equations v(P,h)

	DLL_EXPORT double v_R3a_P_h(double press, double enth)
	{
		return _v_R3a_P_h(press,enth);
	}
	DLL_EXPORT double v_R3b_P_h(double press, double enth)
	{
		return _v_R3b_P_h(press,enth);
	}

	//subregion boundary equation h(P)

	DLL_EXPORT double h_R3ab_P(double press)
	{
		return _h_R3ab_P(press);
	}

	//subregion boundary equation PSat(P,h)

	DLL_EXPORT double pSat_h_R3_R4(double enth)
	{
		return _pSat_h_R3_R4(enth);
	}

	//subregion boundary equations T(P,s)

	DLL_EXPORT double T_R3a_P_s(double press, double entr)
	{
		return _T_R3a_P_s(press, entr);
	}
	DLL_EXPORT double T_R3b_P_s(double press, double entr)
	{
		return _T_R3b_P_s(press, entr);
	}

	//subregion boundary equations v(P,s)

	DLL_EXPORT double v_R3a_P_s(double press, double entr)
	{
		return _v_R3a_P_s(press, entr);
	}
	DLL_EXPORT double v_R3b_P_s(double press, double entr)
	{
		return _v_R3b_P_s(press, entr);
	}

	//properties as functions of density and temperature

	DLL_EXPORT double P_Rho_T_R3(double rho, double temp)
	{
		return _P_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double u_Rho_T_R3(double rho, double temp)
	{
		return _u_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double s_Rho_T_R3(double rho, double temp)
	{
		return _s_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double h_Rho_T_R3(double rho, double temp)
	{
		return _h_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double cp_Rho_T_R3(double rho, double temp)
	{
		return _cp_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double cv_Rho_T_R3(double rho, double temp)
	{
		return _cv_Rho_T_R3(rho, temp);
	}
	DLL_EXPORT double w_Rho_T_R3(double rho, double temp)
	{
		return _w_Rho_T_R3(rho, temp);
	}

	//properties as functions of specific volume and temperature

	DLL_EXPORT double P_v_T_R3(double v, double temp)
	{
		return _P_v_T_R3(v, temp);
	}
	DLL_EXPORT double u_v_T_R3(double v, double temp)
	{
		return _u_v_T_R3(v, temp);
	}
	DLL_EXPORT double s_v_T_R3(double v, double temp)
	{
		return _s_v_T_R3(v, temp);
	}
	DLL_EXPORT double h_v_T_R3(double v, double temp)
	{
		return _h_v_T_R3(v, temp);
	}
	DLL_EXPORT double cp_v_T_R3(double v, double temp)
	{
		return _cp_v_T_R3(v, temp);
	}
	DLL_EXPORT double cv_v_T_R3(double v, double temp)
	{
		return _cv_v_T_R3(v, temp);
	}
	DLL_EXPORT double w_v_T_R3(double v, double temp)
	{
		return _w_v_T_R3(v, temp);
	}

	//properties as functions of pressure and temperature

	DLL_EXPORT double v_P_T_R3(double press, double temp)
	{
		return _v_P_T_R3(press,temp);
	}
	DLL_EXPORT double u_P_T_R3(double press, double temp)
	{
		return _u_P_T_R3(press,temp);
	}
	DLL_EXPORT double s_P_T_R3(double press, double temp)
	{
		return _s_P_T_R3(press,temp);
	}
	DLL_EXPORT double h_P_T_R3(double press, double temp)
	{
		return _h_P_T_R3(press,temp);
	}
	DLL_EXPORT double cv_P_T_R3(double press, double temp)
	{
		return _cv_P_T_R3(press,temp);
	}
	DLL_EXPORT double cp_P_T_R3(double press, double temp)
	{
		return _cp_P_T_R3(press,temp);
	}
	DLL_EXPORT double w_P_T_R3(double press, double temp)
	{
		return _w_P_T_R3(press,temp);
	}

    //properties as functions of pressure and enthalpy

    DLL_EXPORT double v_P_h_R3(double press, double enth)
	{
		return _v_P_h_R3(press,enth);
	}
    DLL_EXPORT double T_P_h_R3(double press, double enth)
	{
		return _T_P_h_R3(press,enth);
	}
    DLL_EXPORT double u_P_h_R3(double press, double enth)
	{
		return _u_P_h_R3(press,enth);
	}
    DLL_EXPORT double s_P_h_R3(double press, double enth)
    {
        return _s_P_h_R3(press,enth);
    }
    DLL_EXPORT double cv_P_h_R3(double press, double enth)
	{
		return _cv_P_h_R3(press,enth);
	}
    DLL_EXPORT double cp_P_h_R3(double press, double enth)
	{
		return _cp_P_h_R3(press,enth);
	}
    DLL_EXPORT double w_P_h_R3(double press, double enth)
	{
		return _w_P_h_R3(press,enth);
	}

    //properties as functions of pressure and entropy

    DLL_EXPORT double v_P_s_R3(double press, double entr)
	{
		return _v_P_s_R3(press,entr);
	}
    DLL_EXPORT double T_P_s_R3(double press, double entr)
	{
		return _T_P_s_R3(press,entr);
	}
    DLL_EXPORT double u_P_s_R3(double press, double entr)
	{
		return _u_P_s_R3(press,entr);
	}
    DLL_EXPORT double h_P_s_R3(double press, double entr)
    {
        return _h_P_s_R3(press,entr);
    }
    DLL_EXPORT double cv_P_s_R3(double press, double entr)
	{
		return _cv_P_s_R3(press,entr);
	}
    DLL_EXPORT double cp_P_s_R3(double press, double entr)
	{
		return _cp_P_s_R3(press,entr);
	}
    DLL_EXPORT double w_P_s_R3(double press, double entr)
	{
		return _w_P_s_R3(press,entr);
	}

	//properties as functions of enthalpy and entropy

	DLL_EXPORT double p_R3a_h_s(double enth, double entr)
	{
		return _p_R3a_h_s(enth,entr);
	}
	DLL_EXPORT double p_R3b_h_s(double enth, double entr)
	{
		return _p_R3b_h_s(enth,entr);
	}
	DLL_EXPORT double P_h_s_R3(double enth, double entr)
	{
		return _P_h_s_R3(enth,entr);
	}
	DLL_EXPORT double T_h_s_R3(double h, double s)
	{
		return _T_h_s_R3(h,s);
	}
	DLL_EXPORT double v_h_s_R3(double h, double s)
	{
		return _v_h_s_R3(h,s);
	}
	DLL_EXPORT double u_h_s_R3(double h, double s)
	{
		return _u_h_s_R3(h,s);
	}
	DLL_EXPORT double cv_h_s_R3(double h, double s)
	{
		return _cv_h_s_R3(h,s);
	}
	DLL_EXPORT double cp_h_s_R3(double h, double s)
	{
		return _cp_h_s_R3(h,s);
	}
	DLL_EXPORT double w_h_s_R3(double h, double s)
	{
		return _w_h_s_R3(h,s);
	}

	//Region 4:

	DLL_EXPORT double Psat_T_R4(double T)
	{
		return _Psat_T_R4(T);
	}
	DLL_EXPORT double Tsat_P_R4(double P)
	{
		return _Tsat_P_R4(P);
	}
	DLL_EXPORT double Tsat_h_s_R4(double enth, double entr)
	{
		return _Tsat_h_s_R4(enth,entr);
	}
	DLL_EXPORT double Psat_h_s_R4(double h, double s)
	{
		return _Psat_h_s_R4(h,s);
	}
	DLL_EXPORT double x_h_s_R4(double h, double s)
	{
		return _x_h_s_R4(h,s);
	}

    DLL_EXPORT double v_P_x_R4(double P, double x)
    {
        return _v_P_x_R4(P,x);
    }
    DLL_EXPORT double h_P_x_R4(double P, double x)
    {
        return _h_P_x_R4(P,x);
    }
    DLL_EXPORT double s_P_x_R4(double P, double x)
    {
        return _s_P_x_R4(P,x);
    }
    DLL_EXPORT double u_P_x_R4(double P, double x)
    {
        return _u_P_x_R4(P,x);
    }

    DLL_EXPORT double v_T_x_R4(double T, double x)
    {
        return _v_T_x_R4(T,x);
    }
    DLL_EXPORT double h_T_x_R4(double T, double x)
    {
        return _h_T_x_R4(T,x);
    }
    DLL_EXPORT double s_T_x_R4(double T, double x)
    {
        return _s_T_x_R4(T,x);
    }
    DLL_EXPORT double u_T_x_R4(double T, double x)
    {
        return _u_T_x_R4(T,x);
    }

	//Region 5:

	DLL_EXPORT double v_P_T_R5(double P, double T)
	{
		return _v_P_T_R5(P,T);
	}
	DLL_EXPORT double u_P_T_R5(double P, double T)
	{
		return _u_P_T_R5(P,T);
	}
	DLL_EXPORT double s_P_T_R5(double P, double T)
	{
		return _s_P_T_R5(P,T);
	}
	DLL_EXPORT double h_P_T_R5(double P, double T)
	{
		return _h_P_T_R5(P,T);
	}
	DLL_EXPORT double cp_P_T_R5(double P, double T)
	{
		return _cp_P_T_R5(P,T);
	}
	DLL_EXPORT double cv_P_T_R5(double P, double T)
	{
		return _cv_P_T_R5(P,T);
	}
	DLL_EXPORT double w_P_T_R5(double P, double T)
	{
		return _w_P_T_R5(P,T);
	}
#endif

DLL_EXPORT double v_P_T(double P, double T)
{
	return _v_P_T(P,T);
}
DLL_EXPORT double u_P_T(double P, double T)
{
	return _u_P_T(P,T);
}
DLL_EXPORT double s_P_T(double P, double T)
{
	return _s_P_T(P,T);
}
DLL_EXPORT double h_P_T(double P, double T)
{
	return _h_P_T(P,T);
}
DLL_EXPORT double cp_P_T(double P, double T)
{
	return _cp_P_T(P,T);
}
DLL_EXPORT double cv_P_T(double P, double T)
{
	return _cv_P_T(P,T);
}
DLL_EXPORT double w_P_T(double P, double T)
{
	return _w_P_T(P,T);
}

DLL_EXPORT double T_P_h(double P, double h)
{
    return _T_P_h(P,h);
}
DLL_EXPORT double v_P_h(double P, double h)
{
    return _v_P_h(P,h);
}
DLL_EXPORT double s_P_h(double P, double h)
{
    return _s_P_h(P,h);
}
DLL_EXPORT double u_P_h(double P, double h)
{
    return _u_P_h(P,h);
}
DLL_EXPORT double cp_P_h(double P, double h)
{
    return _cp_P_h(P,h);
}
DLL_EXPORT double cv_P_h(double P, double h)
{
    return _cv_P_h(P,h);
}
DLL_EXPORT double w_P_h(double P, double h)
{
    return _w_P_h(P,h);
}

DLL_EXPORT double T_P_s(double P, double s)
{
    return _T_P_s(P,s);
}
DLL_EXPORT double v_P_s(double P, double s)
{
    return _v_P_s(P,s);
}
DLL_EXPORT double h_P_s(double P, double s)
{
    return _h_P_s(P,s);
}
DLL_EXPORT double u_P_s(double P, double s)
{
    return _u_P_s(P,s);
}
DLL_EXPORT double cp_P_s(double P, double s)
{
    return _cp_P_s(P,s);
}
DLL_EXPORT double cv_P_s(double P, double s)
{
    return _cv_P_s(P,s);
}
DLL_EXPORT double w_P_s(double P, double s)
{
    return _w_P_s(P,s);
}

DLL_EXPORT double T_h_s(double h, double s)
{
    return _T_h_s(h,s);
}
DLL_EXPORT double P_h_s(double h, double s)
{
    return _P_h_s(h,s);
}
DLL_EXPORT double v_h_s(double h, double s)
{
    return _v_h_s(h,s);
}
DLL_EXPORT double u_h_s(double h, double s)
{
    return _u_h_s(h,s);
}
DLL_EXPORT double cv_h_s(double h, double s)
{
    return _cv_h_s(h,s);
}
DLL_EXPORT double cp_h_s(double h, double s)
{
    return _cp_h_s(h,s);
}
DLL_EXPORT double w_h_s(double h, double s)
{
    return _w_h_s(h,s);
}

DLL_EXPORT double PSat_T(double T)
{
    return _Psat_T_R4(T);
}
DLL_EXPORT double v_T_x(double T, double x)
{
    return _v_T_x_R4(T,x);
}
DLL_EXPORT double u_T_x(double T, double x)
{
    return _u_T_x_R4(T,x);
}
DLL_EXPORT double h_T_x(double T, double x)
{
    return _h_T_x_R4(T,x);
}
DLL_EXPORT double s_T_x(double T, double x)
{
    return _s_T_x_R4(T,x);
}

DLL_EXPORT double TSat_P(double P)
{
    return _Tsat_P_R4(P);
}
DLL_EXPORT double v_P_x(double P, double x)
{
    return _v_P_x_R4(P,x);
}
DLL_EXPORT double u_P_x(double P, double x)
{
    return _u_P_x_R4(P,x);
}
DLL_EXPORT double h_P_x(double P, double x)
{
    return _h_P_x_R4(P,x);
}
DLL_EXPORT double s_P_x(double P, double x)
{
    return _s_P_x_R4(P,x);
}
