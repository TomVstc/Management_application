#include "CL_Adresse_Livraison.h"

namespace NS_Composants
{

	CL_Adresse_Livraison::CL_Adresse_Livraison()
	{
		this->id_livraison = -1;
		this->numero_rue = "Aucun";
		this->nom_rue = "Rien";
		this->ville = "Rien";
		this->cp = "Aucun";
	}

	String^ CL_Adresse_Livraison::SELECT(void)
	{
		return "SELECT ID_livraison, N__de_rue, Nom_de_rue, Ville, Code_postal " +
			"FROM Adresse_livraison; ";
	}

	String^ CL_Adresse_Livraison::INSERT(void)
	{
		return "INSERT INTO Adresse_livraison" + "(N__de_rue, Nom_de_rue, Ville, Code_postal)" +
			"VALUES('" + this->getN_rue() + "', '" + this->getNom_rue() + "', '" + this->getVille() + "', '"
			+ this->getCp() + "');SELECT @@IDENTITY;";
	}

	String^ CL_Adresse_Livraison::UPDATE(void)
	{
		return "UPDATE Adresse_livraison " + "SET N__de_rue = '" + this->getN_rue() + "', Nom_de_rue = '" + this->getNom_rue() +
			"', Ville ='" + this->getVille() + "', Code_postal = '" + this->getCp() +
			"' " + " WHERE (ID_livraison = " + this->getID() + ");";
	}

	String^ CL_Adresse_Livraison::DELETE(void)
	{
		return "DELETE FROM Adresse_livraison" + " WHERE(ID_livraison = " + this->getID() + ");";
	}

	/* -------------- Seteur ------------ */

	void CL_Adresse_Livraison::set_ID(int id_livraison)
	{
		if (id_livraison > 0) {
			this->id_livraison = id_livraison;
		}
	}

	void CL_Adresse_Livraison::setNom_rue(String^ nom_rue)
	{
		if (nom_rue != "") {
			this->nom_rue = nom_rue;
		}
	}

	void CL_Adresse_Livraison::setN_rue(String^ numero_rue)
	{
		if (numero_rue != "") {
			this->numero_rue = numero_rue;
		}
	}

	void CL_Adresse_Livraison::setVille(String^ ville)
	{
		if (ville != "") {
			this->ville = ville;
		}
	}

	void CL_Adresse_Livraison::setCp(String^ cp)
	{
		if (cp != "") {
			this->cp = cp;
		}
	}

	/* -------------- Geteur ------------ */

	int CL_Adresse_Livraison::getID()
	{
		return this->id_livraison;
	}
	String^ CL_Adresse_Livraison::getN_rue()
	{
		return this->numero_rue;
	}
	String^ CL_Adresse_Livraison::getNom_rue()
	{
		return this->nom_rue;
	}
	String^ CL_Adresse_Livraison::getVille()
	{
		return this->ville;
	}
	String^ CL_Adresse_Livraison::getCp()
	{
		return this->cp;
	}
}

