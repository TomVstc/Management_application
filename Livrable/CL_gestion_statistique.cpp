#include "CL_gestion_statistique.h"



NS_svc::CL_gestion_statistique::CL_gestion_statistique()
{
    this->cad = gcnew NS_Composants::CL_CAD();
    this->Statistique = gcnew NS_Composants::CL_Statistique();
    this->ds_statistique = gcnew Data::DataSet();
}

DataSet^ NS_svc::CL_gestion_statistique::Produit_seuil(String^ dataTabName)
{
    this->ds_statistique->Clear();
    this->ds_statistique = this->cad->getRows(this->Statistique->SELECT_PRODUIT_SEUIL(), dataTabName);
    return this->ds_statistique;
}
