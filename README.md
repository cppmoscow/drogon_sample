# drogon_sample

Простой pastebin сервис, реализованный с использованием [drogon](https://github.com/drogonframework/drogon).

## Зависимости

### Для развертывания

* [Docker](https://docs.docker.com/engine/install/)
* [Docker Compose](https://docs.docker.com/compose/install/)

### Для разработчиков

* Все зависимости выше
* [PostgreSQL 14+](https://github.com/drogonframework/drogon/wiki/ENG-02-Installation#postgresql)
* [Drogon](https://github.com/drogonframework/drogon)

## Развертывание

Выполните следующие команды:

```shell
docker compose up --detach
```

После них сервер станет доступен по адресу [http://127.0.0.1:8080](http://127.0.0.1:8080).
