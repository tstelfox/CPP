/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:15:04 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 21:07:50 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class	Enemy {

	public:
		Enemy(int hp, std::string const & type);
        Enemy(const Enemy &original);
		Enemy&	operator = (const Enemy &original);
        virtual ~Enemy();

        std::string     getType() const;
        int             getHP() const;
        
        virtual void    takeDamage(int dmg);
    
    protected:
        Enemy();
        int         _hp;
        std::string _type;

    private:
};


#endif