#include "CL_gestion_adresse_facturation.h"

namespace NS_svc {

	CL_gestion_adresse_facturation::CL_gestion_adresse_facturation(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->Adresse_facturation = gcnew NS_Composants::CL_Adresse_Facturation();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_gestion_adresse_facturation::listeAdresseFacturation(String^ dataTabName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->Adresse_facturation->SELECT(), dataTabName);
		return this->ds;
	}

	int CL_gestion_adresse_facturation::ajouter(String^ numero_rue, String^ nom_rue, String^ ville, String^ cp)
	{
		int id_facturation;
		this->Adresse_facturation->setN_rue(numero_rue);
		this->Adresse_facturation->setNom_rue(nom_rue);
		this->Adresse_facturation->setVille(ville);
		this->Adresse_facturation->setCp(cp);
		id_facturation = this->cad->actionRowsID(this->Adresse_facturation->INSERT());
		return id_facturation;
	}

	void CL_gestion_adresse_facturation::modifier(String^ numero_rue, String^ nom_rue, String^ ville, String^ cp, int id_facturation)
	{
		this->Adresse_facturation->set_ID(id_facturation);
		this->Adresse_facturation->setN_rue(numero_rue);
		this->Adresse_facturation->setNom_rue(nom_rue);
		this->Adresse_facturation->setVille(ville);
		this->Adresse_facturation->setCp(cp);
		this->cad->actionRows(this->Adresse_facturation->UPDATE());
	}

	void CL_gestion_adresse_facturation::supprimer(int id_livraison)
	{
		this->Adresse_facturation->set_ID(id_livraison);
		this->cad->actionRows(this->Adresse_facturation->DELETE());
	}




}