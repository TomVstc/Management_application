#include "CL_Personnel.h"
#include "MyForm.h"

namespace NS_Composants
{
	CL_map_personne::CL_map_personne()  //Initialisation à rien du tout
	{
		this->id_personne = "-1";
		this->nom = "Rien";
		this->prenom = "Rien";
		this->numero_rue = "Rien";
		this->nom_rue = "Rien";
		this->superieur = "Rien";
		this->ville = "Rien";
		this->cp = "Rien";
		this->date_embauche = "Rien";
	}

	String^ CL_map_personne::INSERT(void) //Creation de la requête INSERT
	{
		return "INSERT INTO Personnel " +
			"(Nom, Prenom, N__rue, Nom_de_rue, Date_d_embauche, Superieur_hierarchique, Ville, CP) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getNumero_rue()
			+ "', '" + this->getNom_rue() + "', '" + this->getDate_embauche() + "', '" + this->getSuperieur() + "', '" +
			this->getVille() + "', '" + this->getCp() + "');";
	}

	String^ CL_map_personne::SELECT()
	{
		return "SELECT ID_personnel, Nom, Prenom, N__rue, Nom_de_rue, Date_d_embauche, Superieur_hierarchique, Ville, CP " +
			"FROM Personnel;";
	}

	String^ CL_map_personne::DELETE()
	{
		return "DELETE FROM TB_PERSONNE " +
			"WHERE(id_personne = " + ");";
	}

	String^ CL_map_personne::UPDATE()
	{
		return "UPDATE Personnel SET " +
			"Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', N__rue = '" + this->getNumero_rue() + "', Nom_de_rue = '" + this->getNom_rue() + "', Date_d_embauche = '" + this->getDate_embauche() + "', Superieur_hierarchique = '" + this->getSuperieur() + "', Ville = '" + this->getVille() + "', CP = '" + this->getCp() + "' " +

			"WHERE(ID_personnel = " + this->getId() + ");";;
	}

	void CL_map_personne::setID(String^ id)
	{
		if (id != "" || id != " ")
		{
			this->id_personne = id;
		}
	}

	void CL_map_personne::setPrenom(String^ prenom)  //Setter pour chaques objets créer
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}

	void CL_map_personne::setNom(String^ nom) //idem
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}

	String^ CL_map_personne::getId(void)
	{
		return this->id_personne;
	}

	String^ CL_map_personne::getNom(void) //getter ..idem
	{
		return this->nom;
	}
	String^ CL_map_personne::getPrenom(void) //getter..idem
	{
		return this->prenom;
	}

	void CL_map_personne::setNumero_rue(String^ numero) //setter numero de rue table personne
	{
		if (numero != "")
		{
			this->numero_rue = numero;
		}
	}

	void CL_map_personne::setNom_rue(String^ nom_rue)
	{
		if (nom_rue != "" || nom_rue != " ")
		{
			this->nom_rue = nom_rue;
		}
	}

	void CL_map_personne::setSuperieur(String^ superieur)
	{
		if (superieur != "" || superieur != " ")
		{
			this->superieur = superieur;
		}
	}

	void CL_map_personne::setVille(String^ ville)
	{
		if (ville != "" || ville != " ")
		{
			this->ville = ville;
		}
	}

	void CL_map_personne::setCp(String^ cp)
	{
		if (cp != "")
		{
			this->cp = cp;
		}
	}

	void CL_map_personne::setDate_embauche(String^ date_embauche)
	{
		if (date_embauche != "" || date_embauche != " ")
		{
			this->date_embauche = date_embauche;
		}
	}

	String^ CL_map_personne::getNumero_rue()
	{
		return this->numero_rue;
	}

	String^ CL_map_personne::getNom_rue()
	{
		return this->nom_rue;
	}

	String^ CL_map_personne::getSuperieur()
	{
		return this->superieur;
	}

	String^ CL_map_personne::getVille()
	{
		return this->ville;
	}

	String^ CL_map_personne::getCp()
	{
		return this->cp;
	}

	String^ CL_map_personne::getDate_embauche()
	{
		return this->date_embauche;
	}


}