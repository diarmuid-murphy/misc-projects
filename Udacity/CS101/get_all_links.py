def get_all_links(page):
    links = []
    while page.find('a href') != -1:
        start_pos = page.find('a href="')
        end_pos = page[start_pos + 1:].find('"')
        url = page[start_pos : end_pos]
        links.append(url)
        page = page[end_pos + 1 :]
    return links

get_all_links(a href)
