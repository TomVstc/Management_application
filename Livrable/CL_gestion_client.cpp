#include "CL_gestion_client.h"

namespace NS_svc {

	CL_gestion_client::CL_gestion_client(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->client = gcnew NS_Composants::CL_Client();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_gestion_client::listeClient(String^ dataTabName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->client->SELECT(), dataTabName);
		return this->ds;
	}

	int CL_gestion_client::ajouter(String^ nom, String^ prenom, String^ date_de_naissance, String^ numero_client)
	{
		int id_client;
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->client->setDate_naissance(date_de_naissance);
		this->client->setNumero_client(numero_client);
		id_client = this->cad->actionRowsID(this->client->INSERT());
		return id_client;
	}

	void CL_gestion_client::modifier(String^nom, String^ prenom, String^ date_de_naissance, String^ numero_client, int id_client)
	{
		this->client->set_ID(id_client);
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->client->setDate_naissance(date_de_naissance);
		this->client->setNumero_client(numero_client);
		this->cad->actionRows(this->client->UPDATE());
	}

	void CL_gestion_client::supprimer(int id_client)
	{
		this->client->set_ID(id_client);
		this->cad->actionRows(this->client->DELETE());
	}




}