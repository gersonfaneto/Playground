class Order:
  orderId = 1
  def __init__(self, mealName, hasDesert, tableNumber):
    self._orderId = Order.orderId
    Order.orderId += 1

    self._mealName = ""
    self.mealName = mealName

    self._hasDesert = False
    self.hasDesert = hasDesert

    self._tableNumber = 0
    self.tableNumber = tableNumber

  def __repr__(self):
    return "{} para a mesa {}".format(self.mealName, self.tableNumber)

  @property
  def mealName(self):
    return self._mealName
  @mealName.setter
  def mealName(self, value):
    assert isinstance(value, str) and len(value) > 0, "Nome da refeição inválido!"
    self._mealName = value

  @property
  def hasDesert(self):
    return self._hasDesert
  @hasDesert.setter
  def hasDesert(self, value):
    assert isinstance(value, bool), "Opção de sobremesa inválida!"
    self._hasDesert = value

  @property
  def tableNumber(self):
    return self._tableNumber
  @tableNumber.setter
  def tableNumber(self, value):
    assert isinstance(value, int) and value >= 0, "Número da mesa inválido!"
    self._tableNumber = value

def registerOrder(n):
  clientOrders = []
  for i in range(n):
    order = Order(input(), eval(input()), int(input()))
    clientOrders.append(order)
  return clientOrders

def main():
  clientOrders = registerOrder(3)

  for order in clientOrders:
    if order.hasDesert:
      print(order)

  removeTable = int(input())
  for order in list(clientOrders):
    if order.tableNumber == removeTable:
      clientOrders.remove(order)

  for order in sorted(clientOrders, key = lambda x: x.tableNumber):
    print(order)

if __name__ == "__main__":
  main()
