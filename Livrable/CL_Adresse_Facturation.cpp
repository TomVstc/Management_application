#include "CL_Adresse_Facturation.h"

namespace NS_Composants
{

	CL_Adresse_Facturation::CL_Adresse_Facturation()
	{
		this->id_facturation = -1;
		this->numero_rue = "Aucun";
		this->nom_rue = "Rien";
		this->ville = "Rien";
		this->cp = "Aucun";
	}

	String^ CL_Adresse_Facturation::SELECT(void)
	{
		return "SELECT ID_facturation, N__de_rue, Nom_de_rue, Ville, Code_postal " +
			"FROM Adresse_facturation; ";
	}

	String^ CL_Adresse_Facturation::INSERT(void)
	{
		return "INSERT INTO Adresse_facturation" + "(N__de_rue, Nom_de_rue, Ville, Code_postal)" +
			"VALUES('" + this->getN_rue() + "', '" + this->getNom_rue() + "', '" + this->getVille() + "', '"
			+ this->getCp() + "');SELECT @@IDENTITY;";
	}

	String^ CL_Adresse_Facturation::UPDATE(void)
	{
		return "UPDATE Adresse_facturation " + "SET N__de_rue = '" + this->getN_rue() + "', Nom_de_rue = '" + this->getNom_rue() +
			"', Ville ='" + this->getVille() + "', Code_postal = '" + this->getCp() +
			"' " + " WHERE(ID_facturation = " + this->getID() + ");";
	}

	String^ CL_Adresse_Facturation::DELETE(void)
	{
		return "DELETE FROM Adresse_facturation" + " WHERE(ID_facturation = " + this->getID() + ");";
	}

	/* -------------- Seteur ------------ */

	void CL_Adresse_Facturation::set_ID(int id_facturation)
	{
		if (id_facturation > 0) {
			this->id_facturation = id_facturation;
		}
	}

	void CL_Adresse_Facturation::setNom_rue(String^ nom_rue)
	{
		if (nom_rue != "") {
			this->nom_rue = nom_rue;
		}
	}

	void CL_Adresse_Facturation::setN_rue(String^ numero_rue)
	{
		if (numero_rue != "") {
			this->numero_rue = numero_rue;
		}
	}

	void CL_Adresse_Facturation::setVille(String^ ville)
	{
		if (ville != "") {
			this->ville = ville;
		}
	}

	void CL_Adresse_Facturation::setCp(String^ cp)
	{
		if (cp != "") {
			this->cp = cp;
		}
	}

	/* -------------- Geteur ------------ */

	int CL_Adresse_Facturation::getID()
	{
		return this->id_facturation;
	}
	String^ CL_Adresse_Facturation::getN_rue()
	{
		return this->numero_rue;
	}
	String^ CL_Adresse_Facturation::getNom_rue()
	{
		return this->nom_rue;
	}
	String^ CL_Adresse_Facturation::getVille()
	{
		return this->ville;
	}
	String^ CL_Adresse_Facturation::getCp()
	{
		return this->cp;
	}
}

