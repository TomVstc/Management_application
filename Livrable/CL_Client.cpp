#include "CL_Client.h"

namespace NS_Composants
{

	CL_Client::CL_Client()
	{
	this->id_client = -1;
	this->nom = "Rien";
	this->prenom = "Rien";
	this->date_de_naissance = "Rien";
	this->numero_client = "Rien";
	}

	String^ CL_Client::SELECT(void)
	{
		return "SELECT id_client, nom, prenom, date_de_naissance, numero_client " +
			"FROM Client; ";
	}

	String^ CL_Client::INSERT(void)
	{
		return "INSERT INTO Client" + "(nom, prenom, date_de_naissance, numero_client)" +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getDate_naissance() + "', '"
			+ this->getNumero_client() + "');SELECT @@IDENTITY;";
	}

	String^ CL_Client::UPDATE(void)
	{
		return "UPDATE Client " + "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() +
			"', date_de_naissance ='" + this->getDate_naissance() + "', numero_client = '" + this->getNumero_client() +
			"' " + " WHERE(id_client = " + this->getID() + ");";
	}

	String^ CL_Client::DELETE(void)
	{
		return "DELETE FROM Client" + " WHERE(id_client = " + this->getID() + ");";
	}

	/* -------------- Seteur ------------ */

	void CL_Client::set_ID(int id_client)
	{
		if (id_client > 0) {
			this->id_client = id_client;
		}
	}

	void CL_Client::setNom(String^ nom)
	{
		if (nom != "") {
			this->nom = nom;
		}
	}

	void CL_Client::setPrenom(String^ prenom)
	{
		if (prenom != "") {
			this->prenom = prenom;
		}
	}

	void CL_Client::setDate_naissance(String^ date_de_naissance)
	{
		if (date_de_naissance != "") {
			this->date_de_naissance = date_de_naissance;
		}
	}

	void CL_Client::setNumero_client(String^ numero_client)
	{
		if (numero_client != "") {
			this->numero_client = numero_client;
		}
	}

	/* -------------- Geteur ------------ */

	int CL_Client::getID()
	{
		return this->id_client;
	}
	String^ CL_Client::getNom()
	{
		return this->nom;
	}
	String^ CL_Client::getPrenom()
	{
		return this->prenom;
	}
	String^ CL_Client::getDate_naissance()
	{
		return this->date_de_naissance;
	}
	String^ CL_Client::getNumero_client()
	{
		return this->numero_client;
	}
}

