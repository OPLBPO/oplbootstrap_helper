# OPL Bootstrap Helper

## Installation

## Upgrade from OPL theme

### Preliminary Steps
Create a backup of the site.

````
drush arb
drush sql-dump > ~/opl-preupgrade.sql
````
**The ``drush arb`` command skips a SQL dump for some reason. Create the dump separately.**

If running a local site:
````
drush golocal
````
### Upgrade
Go to the OPL webroot. Check out the latest code from the repository. Run the following commands:

````
drush updb -y
drush en oplbootstrap_helper -y
drush features-revert-all --force feature_exclude opl_transaction opl_booking -y
````