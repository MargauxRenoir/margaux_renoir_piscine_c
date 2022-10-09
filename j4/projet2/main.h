
typedef struct Question Question;

struct Question
{
    int id;
    char* lib;
    char* choix[4];
    unsigned short rep;
};

Question tab_questions[]={
    {1,"A votre avis, que redoute le plus quelqu'un atteint de pteronophobie ?", {"Les ptérodactyles, ces monstrueux dinosaures volants", "D'être chatouillé par des plumes", "De se faire percuter par un objet tombé du ciel"}, 2},
    {2,"Quelle est la particularité des femelles hippopotames ?", {"Elles font du lait rose", "Leurs crottes sont carrées", "Elles ont une langue bleue"}, 1},
    {3,"D'après vous, quelle était la particularité de Mel Blanc, le doubleur de Bugs Bunny ?", {"Il avait les dents du devant très avancées, comme celles de son personnage", "Il vivait en compagnie d'une vingtaine de lapins", "Il était allergique aux carottes"}, 3},
    {4,"Quel est le livre le plus volé au monde ?",{"Harry Potter à l'école des sorciers","La Bible","On ne vole pas de livre, c'est mal"},2},
    {5,"Selon vous, pourquoi les insectes volants nocturnes sont autant attirés par les lumières artificielles ?",{"Ils recherchent la chaleur qu'elles dégagent","Ils les confondent avec celle de la Lune","Ils sont attirés par le bourdonnement qu'elles émettent, quasi inaudible pour nous autres humains"},2},
    {6,"Dans quel pays trouve-t-on le plus de personnes transgenres (= qui ont changé de sexe) ?",{"En Thaïlande","Aux États-Unis","En Iran"},3},
    {7,"Combien de globules rouges sont détruits et remplacés par d'autres chaque seconde dans votre corps ?",{"Environ 500 000","Environ 1 million","Environ 2 millions"},3},
    {8,"D'après vous, de combien de fois le diamètre du Soleil est-il supérieur à celui de la Terre ?",{"72 fois","95 fois","109 fois"},3},
    {9,"A qui doit-on l'invention du symbole arobase (@) ?",{"A des moines copistes au 6ème siècle après J.C","A Trevor A.Robase, un informaticien spécialisé en cryptologie","Aux services secrets alliés lors de la Seconde Guerre Mondiale, qui l'utilisait dans leurs messages codés."},1},
    {10,"La langue la plus parlée dans le monde est...",{"L'anglais","Le mandarin","Le chinois"},2},
    {11,"D'après vous, de quoi a peur un coulrophobe?",{"Des couloirs","Des clowns","Des couleuvres"},2},
    {12,"Combien de cm peut atteindre la langue d'un caméléon ?",{"10 cm","20 cm","30 cm"},2},
    {13,"Si toute la pluie contenue dans l'atmosphère tombait en même temps , elle couvrirait la Terre d'une couche d'eau de...",{"10 cm","5 cm","2,5 cm"},3},
    {14,"Le chant des baleines à bosses peut atteindre...",{"100 décibels","140 décibels","190 décibels"},3},
    {15,"A votre avis, combien de bébés naissent chaque jour ?",{"Environ 350 000","Environ 500 000","Environ 760 000"},1},
    {16,"Le cœur de la crevette est placé...",{"Dans son tube digestif","Dans sa tete","Dans sa queue"},2},
    {17,"Aucune feuille de papier, quelle que soit sa taille, ne peut être pliée sur elle-même plus de...",{"5 fois","6 fois","7 fois"},3},
    {18,"Vrai ou faux ? Le kangourou ne peut pas reculer.",{"Vrai","Faux","Le kangourou n'existe pas, c'est un animal mythique"},1},
    {19,"La distance entre le centre et la surface de la Terre est d'environ...",{"4500 km","6300 km","9000 km"},2},
    {20,"Jouons un peu ! Selon vous, le plus ancien jeu connu est:",{"Le bowling","Le jeu de cartes","La pétanque"},1},
    {21,"Quel était le but de la terrifiante 'expérience de Stanford' ?",{"Observer la tendance des gens à adhérer à une certaine idéologie et à se soumettre à l’autorité.","Savoir combien de temps un être humain pouvait être privé de sommeil avant de sombrer dans la folie.","Evaluer le degré maximal de douleur à atteindre chez un humain avant de tomber en syncope."},1},
    {22,"Si la Terre était plate, jusqu'à quelle distance l’oeil humain pourrait voir la lueur d’une bougie ?",{"6 km","19 km","48 km"},3},
    {23,"De quand date la toute première bd jamais publiée ?",{"1848","1896","1924"},2},
    {24,"En moyenne, combien de km l'être humain parcoure-t-il à pied au cours de sa vie ?",{"62 000 Km","195 000 Km","257 000 Km"},2},
    {25,"Comment s'appelle l'un des animaux les plus stupides du monde ?",{"La loutre bigleuse","Le Kakapo","Le paresseux"},2},
    {26,"Au cours d'une nuit, nous rêvons pendant environ...",{"60 mintues","100 mintues","150 mintues"},2},
    {27,"A votre avis, combien de kilos de nourriture un homme ingère-t-il au cours de sa vie, en moyenne ?",{"15 000 kg","30 000 kg","50 000 kg"},3},
    {28,"Le plus grand escalator du monde se trouve...",{"A 'Monument Valley', aux Etats-Unis","A St Pétersbourg, en Russie","A Melbourne, en Australie"},2},
 
};
