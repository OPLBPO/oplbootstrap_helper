# OPL Bootstrap Helper

## Installation

## Upgrade from OPL theme

### Preliminary Steps
Create a backup of the site.

````
drush arb
drush sql-dump > ~/opl-preupgrade.sql
drush vset maintenance_mode 1
````
**The ``drush arb`` command skips a SQL dump for some reason. Create the dump separately.**

If running a local site:
````
drush golocal
````
### Upgrade
Go to the OPL webroot. Check out the latest code from the repository. Run the following commands:

````
cd /tmp
git clone git@github.com:OPLBPO/opl_make.git --branch opl-d7
cd opl_make
drush make opl.make --concurrency=3 --no-cache build
rm -rf build/sites/default
cp -ra /home/dev2/pre-update/sites/default build/sites/default
sudo mv /home/dev2/pre-update /tmp/old-d7 && sudo mv build /home/dev2/pre-update
cd /home/dev2/pre-update
drush updb -y
drush en oplbootstrap_helper -y
drush features-revert-all --force feature_exclude opl_transaction opl_booking -y
````
## Post Upgrade Steps

````
drush vset maintenance_mode 0
````
