function showPage(page) {
    // Remover a classe 'active' de todas as seções
    var sections = document.querySelectorAll('.page');
    sections.forEach(function(section) {
        section.classList.remove('active');
    });

    // Adicionar a classe 'active' à seção selecionada
    var activePage = document.getElementById(page);
    activePage.classList.add('active');

    // Remover a classe 'active' de todos os itens de navegação
    var navItems = document.querySelectorAll('nav ul li');
    navItems.forEach(function(item) {
        item.classList.remove('active');
    });

    // Adicionar a classe 'active' ao item de navegação correspondente
    var activeNavItem = document.getElementById(page + "Nav");
    activeNavItem.classList.add('active');
}
